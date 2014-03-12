// START FUNC DECL
void div_scalar_I4(
			    int *in1, 
			    int in2, 
			    long long nR, 
			    int * restrict out
			    )
// STOP FUNC DECL
{
  for ( long long i = 0; i < nR; i++ ) { 
    *out++ = *in1++ / in2;
  }
}