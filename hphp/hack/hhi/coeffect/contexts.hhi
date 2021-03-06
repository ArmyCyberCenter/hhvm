<?hh
/**
 * Copyright (c) 2020, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 */

/**
 * To concisely model multiple capabilities, we use intersection types
 * (denoted by &). This is an exact approximation, unlike introducing
 * a new subtype via interface hierarchies and using multiple inheritance.
 * (In case of the latter, introducing all parent capabilities separately
 * would not be equal to introducing them via the subtype capability.)
 */
<<file:__EnableUnstableFeatures('union_intersection_type_hints')>>

namespace HH {
  /**
   * This namespace contains pseudo-types that represent capabilities.
   * To establish calling conventions (i.e., which function/method can
   * be safely called from certain contexts), the typechecker desugars
   * each context into a set of capabilities in this namespace.
   *
   * Capabilities are categorized by the domain of corresponding effects
   * such that a capability CAP for domain DOMAIN can be found as follows:
   * ```
   *   // file: domain_DOMAIN.hhi
   *   <<__Sealed(...)>>>
   *   interface CAP extends ... {}
   * ```
   *
   * (A set of) capabilities act as a permission for enforcing permitted
   * combination of caller/callee contexts while type-checking.
   * In layman's terms, an active capability can be converted to
   * any of its supertypes (but not subtypes), and a function/method
   * call type-checks if and only if:
   * - for every capability required by the callee, there is
   *   a matching capability present at the call site (i.e., caller),
   * where a capability of caller may be reused and converted to
   * any of its supertype capabilities multiple times in order to
   * match each capability required by the caller.
   *
   * From a formal standpoint, a set of capabilities is represented as
   * a single intersection type between the constituent capabilities,
   * and the only requirement is that the caller's capability type is
   * a subtype of the callee's capability type. This is soundly
   * approximated by inheriting from constituent capabilities,
   * each of which is a sealed interface.
   */
  namespace Capabilities {
    /**
     * Top level only. Capabilities are defined in adjacent HHI files
     * and separated by their effect domain.
     */
    <<__Sealed(
      Rx::class,
      CippGlobal::class,
      NonDet::class,
      Globals::class,
      IO::class,
      UnrestrictedMutation::class
    )>>
    interface Server {}

    <<__Sealed()>>
    interface Client {}
  }

  /**
   * This namespace provides a 1-to-1 mapping between user-facing contexts
   * and a set of capabilities irrelevant to the user. The latter is
   * modeled as a series of interfaces, each with:
   * - a lowercase name (so that mapping is syntactical, avoiding extra logic)
   * - extends clause that lists all other capabilities that are subsumed,
   *   i.e., automatically present in the corresponding context
   */
  namespace Contexts {
    /**
     * The default, normally unannotated context,
     * maps to multiple capabilities precisely.
     */
    // type defaults = (rx_local & cipp_global & UnrestrictedMutation);
    type defaults = (
      \HH\Capabilities\RxLocal &
      \HH\Capabilities\IO &
      \HH\Capabilities\CippGlobal &
      \HH\Capabilities\Globals &
      \HH\Capabilities\UnrestrictedMutation
    );

    type pure = \HH\Capabilities\Server;
    /**
     * As an unsafe extension and for the purpose of top-level migration,
     * we additionally map certain contexts to a (set of) capabilities that
     * are provided but not required by a function (i.e., they are unsafe).
     * This namespace contains mapping to such capabilities using
     * same-named contexts. More precisely, the function/method with context
     * `ctx` has the following type of capability in its body:
     *   \HH\Capabilities\ctx & \HH\Capabilities\Unsafe\ctx
     * where safe contexts have `\Unsafe\ctx = mixed`. The function signature's
     * capability remains:
     *   \HH\Capabilities\ctx
     * for the purposes of subtyping and calling.
     */
    namespace Unsafe {
      type defaults = mixed;
      type pure = mixed;
    }
  }
}
