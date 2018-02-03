// Sobel Original code
for (dy = -1; dy < 2; dy++) {
  for (dx = -1; dx < 2; dx++) {
    result += filter[(dy+1)*3+
                     (dx+1)]*
              pixels[(y+dy)*width+
                     (x+dx)];
  }
}