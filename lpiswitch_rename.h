/* Copyright (C) 2012 Stefan Vigerske and others
 * All Rights Reserved.
 * This code is published under the Eclipse Public License.
 *
 * Author: Stefan Vigerske
 */

#define CONCAT(x,y) x ## y
#define EVALCONCAT(x,y) CONCAT(x,y)

#define SCIPlpiGetSolverName EVALCONCAT(SCIPlpiGetSolverName,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetSolverDesc EVALCONCAT(SCIPlpiGetSolverDesc,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetSolverPointer EVALCONCAT(SCIPlpiGetSolverPointer,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetIntegralityInformation EVALCONCAT(SCIPlpiSetIntegralityInformation,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasPrimalSolve EVALCONCAT(SCIPlpiHasPrimalSolve,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasDualSolve EVALCONCAT(SCIPlpiHasDualSolve,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasBarrierSolve EVALCONCAT(SCIPlpiHasBarrierSolve,LPISW_RENAME_SUFFIX)
#define SCIPlpiCreate EVALCONCAT(SCIPlpiCreate,LPISW_RENAME_SUFFIX)
#define SCIPlpiFree EVALCONCAT(SCIPlpiFree,LPISW_RENAME_SUFFIX)
#define SCIPlpiLoadColLP EVALCONCAT(SCIPlpiLoadColLP,LPISW_RENAME_SUFFIX)
#define SCIPlpiAddCols EVALCONCAT(SCIPlpiAddCols,LPISW_RENAME_SUFFIX)
#define SCIPlpiDelCols EVALCONCAT(SCIPlpiDelCols,LPISW_RENAME_SUFFIX)
#define SCIPlpiDelColset EVALCONCAT(SCIPlpiDelColset,LPISW_RENAME_SUFFIX)
#define SCIPlpiAddRows EVALCONCAT(SCIPlpiAddRows,LPISW_RENAME_SUFFIX)
#define SCIPlpiDelRows EVALCONCAT(SCIPlpiDelRows,LPISW_RENAME_SUFFIX)
#define SCIPlpiDelRowset EVALCONCAT(SCIPlpiDelRowset,LPISW_RENAME_SUFFIX)
#define SCIPlpiClear EVALCONCAT(SCIPlpiClear,LPISW_RENAME_SUFFIX)
#define SCIPlpiChgBounds EVALCONCAT(SCIPlpiChgBounds,LPISW_RENAME_SUFFIX)
#define SCIPlpiChgSides EVALCONCAT(SCIPlpiChgSides,LPISW_RENAME_SUFFIX)
#define SCIPlpiChgCoef EVALCONCAT(SCIPlpiChgCoef,LPISW_RENAME_SUFFIX)
#define SCIPlpiChgObjsen EVALCONCAT(SCIPlpiChgObjsen,LPISW_RENAME_SUFFIX)
#define SCIPlpiChgObj EVALCONCAT(SCIPlpiChgObj,LPISW_RENAME_SUFFIX)
#define SCIPlpiScaleRow EVALCONCAT(SCIPlpiScaleRow,LPISW_RENAME_SUFFIX)
#define SCIPlpiScaleCol EVALCONCAT(SCIPlpiScaleCol,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetNRows EVALCONCAT(SCIPlpiGetNRows,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetNCols EVALCONCAT(SCIPlpiGetNCols,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetObjsen EVALCONCAT(SCIPlpiGetObjsen,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetNNonz EVALCONCAT(SCIPlpiGetNNonz,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetCols EVALCONCAT(SCIPlpiGetCols,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetRows EVALCONCAT(SCIPlpiGetRows,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetColNames EVALCONCAT(SCIPlpiGetColNames,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetRowNames EVALCONCAT(SCIPlpiGetRowNames,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetObj EVALCONCAT(SCIPlpiGetObj,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBounds EVALCONCAT(SCIPlpiGetBounds,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetSides EVALCONCAT(SCIPlpiGetSides,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetCoef EVALCONCAT(SCIPlpiGetCoef,LPISW_RENAME_SUFFIX)
#define SCIPlpiSolvePrimal EVALCONCAT(SCIPlpiSolvePrimal,LPISW_RENAME_SUFFIX)
#define SCIPlpiSolveDual EVALCONCAT(SCIPlpiSolveDual,LPISW_RENAME_SUFFIX)
#define SCIPlpiSolveBarrier EVALCONCAT(SCIPlpiSolveBarrier,LPISW_RENAME_SUFFIX)
#define SCIPlpiStartStrongbranch EVALCONCAT(SCIPlpiStartStrongbranch,LPISW_RENAME_SUFFIX)
#define SCIPlpiEndStrongbranch EVALCONCAT(SCIPlpiEndStrongbranch,LPISW_RENAME_SUFFIX)
#define SCIPlpiStrongbranchFrac EVALCONCAT(SCIPlpiStrongbranchFrac,LPISW_RENAME_SUFFIX)
#define SCIPlpiStrongbranchesFrac EVALCONCAT(SCIPlpiStrongbranchesFrac,LPISW_RENAME_SUFFIX)
#define SCIPlpiStrongbranchInt EVALCONCAT(SCIPlpiStrongbranchInt,LPISW_RENAME_SUFFIX)
#define SCIPlpiStrongbranchesInt EVALCONCAT(SCIPlpiStrongbranchesInt,LPISW_RENAME_SUFFIX)
#define SCIPlpiWasSolved EVALCONCAT(SCIPlpiWasSolved,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetSolFeasibility EVALCONCAT(SCIPlpiGetSolFeasibility,LPISW_RENAME_SUFFIX)
#define SCIPlpiExistsPrimalRay EVALCONCAT(SCIPlpiExistsPrimalRay,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasPrimalRay EVALCONCAT(SCIPlpiHasPrimalRay,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsPrimalUnbounded EVALCONCAT(SCIPlpiIsPrimalUnbounded,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsPrimalInfeasible EVALCONCAT(SCIPlpiIsPrimalInfeasible,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsPrimalFeasible EVALCONCAT(SCIPlpiIsPrimalFeasible,LPISW_RENAME_SUFFIX)
#define SCIPlpiExistsDualRay EVALCONCAT(SCIPlpiExistsDualRay,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasDualRay EVALCONCAT(SCIPlpiHasDualRay,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsDualUnbounded EVALCONCAT(SCIPlpiIsDualUnbounded,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsDualInfeasible EVALCONCAT(SCIPlpiIsDualInfeasible,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsDualFeasible EVALCONCAT(SCIPlpiIsDualFeasible,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsOptimal EVALCONCAT(SCIPlpiIsOptimal,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsStable EVALCONCAT(SCIPlpiIsStable,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsObjlimExc EVALCONCAT(SCIPlpiIsObjlimExc,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsIterlimExc EVALCONCAT(SCIPlpiIsIterlimExc,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsTimelimExc EVALCONCAT(SCIPlpiIsTimelimExc,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetInternalStatus EVALCONCAT(SCIPlpiGetInternalStatus,LPISW_RENAME_SUFFIX)
#define SCIPlpiIgnoreInstability EVALCONCAT(SCIPlpiIgnoreInstability,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetObjval EVALCONCAT(SCIPlpiGetObjval,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetSol EVALCONCAT(SCIPlpiGetSol,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetPrimalRay EVALCONCAT(SCIPlpiGetPrimalRay,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetDualfarkas EVALCONCAT(SCIPlpiGetDualfarkas,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetIterations EVALCONCAT(SCIPlpiGetIterations,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetRealSolQuality EVALCONCAT(SCIPlpiGetRealSolQuality,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBase EVALCONCAT(SCIPlpiGetBase,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetBase EVALCONCAT(SCIPlpiSetBase,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBasisInd EVALCONCAT(SCIPlpiGetBasisInd,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBInvRow EVALCONCAT(SCIPlpiGetBInvRow,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBInvCol EVALCONCAT(SCIPlpiGetBInvCol,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBasisInd EVALCONCAT(SCIPlpiGetBasisInd,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBInvARow EVALCONCAT(SCIPlpiGetBInvARow,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetBInvACol EVALCONCAT(SCIPlpiGetBInvACol,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetState EVALCONCAT(SCIPlpiGetState,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetState EVALCONCAT(SCIPlpiSetState,LPISW_RENAME_SUFFIX)
#define SCIPlpiClearState EVALCONCAT(SCIPlpiClearState,LPISW_RENAME_SUFFIX)
#define SCIPlpiFreeState EVALCONCAT(SCIPlpiFreeState,LPISW_RENAME_SUFFIX)
#define SCIPlpiHasStateBasis EVALCONCAT(SCIPlpiHasStateBasis,LPISW_RENAME_SUFFIX)
#define SCIPlpiReadState EVALCONCAT(SCIPlpiReadState,LPISW_RENAME_SUFFIX)
#define SCIPlpiWriteState EVALCONCAT(SCIPlpiWriteState,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetNorms EVALCONCAT(SCIPlpiGetNorms,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetNorms EVALCONCAT(SCIPlpiSetNorms,LPISW_RENAME_SUFFIX)
#define SCIPlpiFreeNorms EVALCONCAT(SCIPlpiFreeNorms,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetIntpar EVALCONCAT(SCIPlpiGetIntpar,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetIntpar EVALCONCAT(SCIPlpiSetIntpar,LPISW_RENAME_SUFFIX)
#define SCIPlpiGetRealpar EVALCONCAT(SCIPlpiGetRealpar,LPISW_RENAME_SUFFIX)
#define SCIPlpiSetRealpar EVALCONCAT(SCIPlpiSetRealpar,LPISW_RENAME_SUFFIX)
#define SCIPlpiInfinity EVALCONCAT(SCIPlpiInfinity,LPISW_RENAME_SUFFIX)
#define SCIPlpiIsInfinity EVALCONCAT(SCIPlpiIsInfinity,LPISW_RENAME_SUFFIX)
#define SCIPlpiReadLP EVALCONCAT(SCIPlpiReadLP,LPISW_RENAME_SUFFIX)
#define SCIPlpiWriteLP EVALCONCAT(SCIPlpiWriteLP,LPISW_RENAME_SUFFIX)

#if 0
#include "scip/def.h"

SCIP_Bool SCIPlpiHasPrimalSolve (void)
{
   return FALSE;
}

SCIP_Bool SCIPlpiHasDualSolve (void)
{
   return FALSE;
}

SCIP_Bool SCIPlpiHasBarrierSolve (void)
{
   return FALSE;
}
#endif
