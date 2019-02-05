#include "permute.cpp"
int choose(int n, int k){
	return permute(n,k)/permute(k,k);
}
