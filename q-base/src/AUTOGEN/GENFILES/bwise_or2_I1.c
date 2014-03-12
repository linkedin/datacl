#include <stdio.h>
typedef long long longlong;
// START FUNC DECL
void
bwise_or2_I1( 
			    unsigned char *in1, 
			    unsigned char *in2, 
			    long long nR, 
			    unsigned char * restrict out
			    )
// STOP FUNC DECL
{
  unsigned char inv1, inv2, outv;
  for ( long long i = 0; i < nR; i++ ) { 
    inv1 = *in1;
    inv2 = *in2;
    outv = inv1 | inv2;
    *out = outv;
    in1++;
    in2++;
    out++;
  }
}