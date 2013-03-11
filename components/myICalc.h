/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM myICalc.idl
 */

#ifndef __gen_myICalc_h__
#define __gen_myICalc_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    myICalc */
#define MYICALC_IID_STR "b87e4fb8-a738-42f9-891e-dea18d293926"

#define MYICALC_IID \
  {0xb87e4fb8, 0xa738, 0x42f9, \
    { 0x89, 0x1e, 0xde, 0xa1, 0x8d, 0x29, 0x39, 0x26 }}

class NS_NO_VTABLE myICalc : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MYICALC_IID)

  /* long add (in long a, in long b); */
  NS_IMETHOD Add(int32_t a, int32_t b, int32_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(myICalc, MYICALC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MYICALC \
  NS_IMETHOD Add(int32_t a, int32_t b, int32_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MYICALC(_to) \
  NS_IMETHOD Add(int32_t a, int32_t b, int32_t *_retval) { return _to Add(a, b, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MYICALC(_to) \
  NS_IMETHOD Add(int32_t a, int32_t b, int32_t *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(a, b, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class myCalc : public myICalc
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MYICALC

  myCalc();

private:
  ~myCalc();

protected:
  /* additional members */
};

/* Implementation file */
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
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_myICalc_h__ */
