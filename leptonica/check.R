


dyn.load("Rlept.dll")
ans = .Call("R_pixRead", "sampleImage.jpg")
stopifnot(ans == TRUE)

