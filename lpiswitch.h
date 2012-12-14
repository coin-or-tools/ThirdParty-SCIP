/* Copyright (C) 2012 Stefan Vigerske and others
 * All Rights Reserved.
 * This code is published under the Eclipse Public License.
 *
 * Author: Stefan Vigerske
 */

#ifndef LPISWITCH_H_
#define LPISWITCH_H_

#include "scip/type_retcode.h"

#ifdef __cplusplus
extern "C" {
#endif

enum SCIP_LPISW_LPSolver
{
   SCIP_LPISW_CLP,
   SCIP_LPISW_CPLEX,
   SCIP_LPISW_GUROBI,
   SCIP_LPISW_MOSEK,
   SCIP_LPISW_NONE,
   SCIP_LPISW_QSOPT,
   SCIP_LPISW_SOPLEX,
   SCIP_LPISW_XPRESS
};
typedef enum SCIP_LPISW_LPSolver SCIP_LPISW_LPSOLVER;

/** gets enum of currently used LP solver */
extern
SCIP_LPISW_LPSOLVER SCIPlpiSwitchGetCurrentSolver();

/** sets static function pointers to LPI functions of a particular solver */
extern
SCIP_RETCODE SCIPlpiSwitchSetSolver(
   SCIP_LPISW_LPSOLVER   lpsolver            /**< LP Solver to use */
   );

#ifdef __cplusplus
}
#endif

#endif /* LPISWITCH_H_ */
