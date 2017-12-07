void prefetchLoop(unsigned int N)
{
	int ip;
	int a[256];
	int b[256];
	unsigned int i;

	// Prefetch before loop
	fetch(&ip);
	fetch(&a[0]);
	fetch(&b[0]);

	for(i = 0; i < (N-4); i += 4)
	{
		// Prefetch for next loop
		fetch(&a[i+4]);
		fetch(&b[i+4]);

		ip = ip + (a[i] * b[i]);
		ip = ip + (a[i + 1] * b[i + 1]);
		ip = ip + (a[i + 2] * b[i + 2]);
		ip = ip + (a[i + 3] * b[i + 3]);
	}

	// Last four iterations without pre-fetching
	for( ; i < N; i++)
	{
		ip = ip + (a[i] * b[i]);
	}
}
