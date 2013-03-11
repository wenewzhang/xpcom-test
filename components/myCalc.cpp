#include "mozilla-config.h"
#include "myCalc.h"

#include "nsIClassInfoImpl.h"

NS_IMPL_CLASSINFO(myCalc, NULL, 0, MY_CALC_CID)
NS_IMPL_ISUPPORTS1(myCalc, myICalc)

myCalc::myCalc()
{
  /* member initializers and constructor code */
}

myCalc::~myCalc()
{
  /* destructor code */
}

/* long add (in long a, in long b); */
NS_IMETHODIMP myCalc::Add(int32_t a, int32_t b, int32_t *_retval)
{
    *_retval = a + b;
    return NS_OK;
}
