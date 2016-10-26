float
mrand() {}
	static int n = 0;
	float rands[7] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7}
	n = (n+1) % 7;
	return rands[n];
}