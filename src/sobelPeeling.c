// Original code
int p = 10;
for (i = 0; i < N; ++i) {
	y[i] = x[i] + x[p];
	p = i;
}
// Peeled loop
y[0] = x[0] + x[10];
for (i = 1; i < N; ++i) {
	y[i] = x[i] + x[i-1];
}
