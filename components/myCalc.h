#ifndef __MYCALC_H__
#define __MYCALC_H__

#include "myICalc.h"

#define MY_CALC_CONTRACT_ID "@cozmixng.org/xpcom-sample/Calc;1"
#define MY_CALC_CLASS_NAME "Calculator"
#define MY_CALC_CID_STR "b87e4fb8-a738-42f9-891e-dea18d293926"

// ----
#define MY_CALC_CID                                     \
  {0xb87e4fb8, 0xa738, 0x42f9,                          \
     {0x89, 0x1e, 0xde, 0xa1, 0x8d, 0x29, 0x39, 0x26}}

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

#endif
