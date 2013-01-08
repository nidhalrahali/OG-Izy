#ifndef IZY_H 
#define IZY_H 1
#include "izymacros.h"

_VECTORONEARGONERESULTFUNCTION(acos)
_VECTORONEARGONERESULTFUNCTION(asin)
_VECTORONEARGONERESULTFUNCTION(atan)
_VECTORONEARGONERESULTFUNCTION(atan2)
_VECTORONEARGONERESULTFUNCTION(cos)
_VECTORONEARGONERESULTFUNCTION(sin)     
_VECTORONEARGTWORESULTFUNCTION(sincos)     
_VECTORONEARGONERESULTFUNCTION(tan)     
_VECTORONEARGONERESULTFUNCTION(acosh)     
_VECTORONEARGONERESULTFUNCTION(asinh)
_VECTORONEARGONERESULTFUNCTION(atanh)
_VECTORONEARGONERESULTFUNCTION(cosh) 
_VECTORONEARGONERESULTFUNCTION(sinh)
_VECTORONEARGONERESULTFUNCTION(tanh)                             
_VECTORONEARGONERESULTFUNCTION(cbrt) 
_VECTORONEARGTWORESULTFUNCTION(hypot) 
_VECTORONEARGONERESULTFUNCTION(inv)
_VECTORONEARGONERESULTFUNCTION(invcbrt)
_VECTORONEARGONERESULTFUNCTION(invsqrt)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(pow)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(powx)
_VECTORONEARGONERESULTFUNCTION(pow2o3)
_VECTORONEARGONERESULTFUNCTION(pow3o2)
_VECTORONEARGONERESULTFUNCTION(sqrt)
_VECTORONEARGONERESULTFUNCTION(exp)
_VECTORONEARGONERESULTFUNCTION(expm1)
_VECTORONEARGONERESULTFUNCTION(ln)
_VECTORONEARGONERESULTFUNCTION(log10)
_VECTORONEARGONERESULTFUNCTION(log1p)
_VECTORONEARGONERESULTFUNCTION(abs)
_VECTORTWOARGONERESULTFUNCTION(add)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(addx)
_VECTORTWOARGONERESULTFUNCTION(div)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(divx)
void linearfrac(double * arg0, const int * offset0, double * arg1, const int * offset1, const double * scale0, const double * scale1, const double * shift0, const double * shift1, double * out0, const int * offsetout0);
_VECTORTWOARGONERESULTFUNCTION(mul)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(mulx)
_VECTORTWOARGONERESULTFUNCTION(sqr)
_VECTORTWOARGONERESULTFUNCTION(sub)
_VECTORTWOARGONEISCONSTONERESULTFUNCTION(subx)
_VECTORONEARGONERESULTFUNCTION(ceil)
_VECTORONEARGONERESULTFUNCTION(floor)
_VECTORONEARGTWORESULTFUNCTION(modf)
_VECTORONEARGONERESULTFUNCTION(nearbyint)
_VECTORONEARGONERESULTFUNCTION(rint)    
_VECTORONEARGONERESULTFUNCTION(round)
_VECTORONEARGONERESULTFUNCTION(trunc)
_VECTORONEARGONERESULTFUNCTION(cdfnorm)
_VECTORONEARGONERESULTFUNCTION(cdfnorminv)
_VECTORONEARGONERESULTFUNCTION(erf)
_VECTORONEARGONERESULTFUNCTION(erfc)
_VECTORONEARGONERESULTFUNCTION(erfinv)
_VECTORONEARGONERESULTFUNCTION(erfcinv)
_VECTORONEARGONERESULTFUNCTION(lgamma)
_VECTORONEARGONERESULTFUNCTION(tgamma)

#endif