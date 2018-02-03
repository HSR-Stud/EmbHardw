// Sobel Unrolled code
for (dy = -1; dy < 2; dy++) {
	result += filter[(dy+1)*3+0]*pixels[(y+dy)*width+(x-1)];
	result += filter[(dy+1)*3+1]*pixels[(y+dy)*width+(x+0)];
	result += filter[(dy+1)*3+2]*pixels[(y+dy)*width+(x+1)];
}