#include <leptonica/allheaders.h>

int
main(int argc, char *argv[])
{
  PIX *pix = NULL;
  pix = pixRead(argv[1]);
  return(pix != NULL);
}

