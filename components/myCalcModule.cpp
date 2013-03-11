#include "mozilla/ModuleUtils.h"
#include "nsIClassInfoImpl.h"

#include "myCalc.h"

NS_GENERIC_FACTORY_CONSTRUCTOR(myCalc)

NS_DEFINE_NAMED_CID(MY_CALC_CID);

static const mozilla::Module::CIDEntry kCalcCIDs[] = {
    { &kMY_CALC_CID, false, NULL, myCalcConstructor },
    { NULL }
};

static const mozilla::Module::ContractIDEntry kCalcContracts[] = {
    { MY_CALC_CONTRACT_ID, &kMY_CALC_CID },
    { NULL }
};

static const mozilla::Module::CategoryEntry kCalcCategories[] = {
    { "my-category", "my-key", MY_CALC_CONTRACT_ID },
    { NULL }
};

static const mozilla::Module kCalcModule = {
    mozilla::Module::kVersion,
    kCalcCIDs,
    kCalcContracts,
    kCalcCategories
};

NSMODULE_DEFN(myCalcModule) = &kCalcModule;
// NS_IMPL_MOZILLA192_NSGETMODULE(&kCalcModule)
