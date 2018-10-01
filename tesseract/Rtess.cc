#include <tesseract/baseapi.h>

#undef ERROR
#include <Rdefines.h>

extern SEXP
R_tess()
{
  tesseract::TessBaseAPI api;
  const char * p = api.GetDatapath();
  return(ScalarString(mkChar(p)));
}
