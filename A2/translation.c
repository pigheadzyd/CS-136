// this module provides functions translated from Racket

// polyeval(a, b, c, x) evaluates ax^2 + bx + c
int polyeval(const int a, const int b, const int c, const int x){
	return (a * x * x + b * x + c);
};

// selector(a, x, y) produces x if a is non-zero, and y otherwise
int selector(const int a, const int x, const int y){
	if (a == 0)
	{
		return y;
	}
	else {
		return x;
	}
};

// max3(a, b, c) produces the max of a, b and c
int max3(const int a, const int b, const int c){
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else{
		return c;
	}
};

// sumsqr1(n) produces the sum of 1^2, 2^2, .... n^2
int sumsqr1(const int n){
	if (n == 0)
	{
		return 0;
	}
	else {
		return ((n * n) + sumsqr1(n - 1));
	}
};

static int sumsqr2acc(const int n,const int sofar){
	if (n == 0){
		return sofar;
	}
	else {
		return sumsqr2acc((n-1),(n * n + sofar));
	}
} 

// sumsqr2(n) produces the sum of 1^2, 2^2, .... n^2
int sumsqr2(const int n){
	return sumsqr2acc(n,0);
};

// sumsqr3(n) produces the sum of 1^2, 2^2, .... n^2
int sumsqr3(const int n){
	return (n * (n + 1) * (2 * n + 1) / 6);
};

// sameparity(a, b) produces 1 if a and b have the same parity (odd/even)
//   or 0 otherwise
int sameparity(const int a, const int b){
	if (((a % 2 == 0)&&(b % 2 == 0))||((a % 2 == 1)&&(b % 2 == 1)))
	{
		return 1;
	}
	else{
		return 0;
	}
};
