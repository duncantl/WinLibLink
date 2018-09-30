#include <leptonica/allheaders.h>

#include <Rdefines.h>

SEXP
R_pixRead(SEXP f)
{
  PIX *pix = NULL;
  pix = pixRead(CHAR(STRING_ELT(f, 0)));
  return(ScalarLogical(pix != NULL));
}

