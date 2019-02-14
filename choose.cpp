#include "permute.cpp"
unsigned long long int choose(long int n, long int k){
	return permute(n,k)/permute(k,k);
}
