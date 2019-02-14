#include "choose.cpp"
unsigned long long int multichoose(int n, int k){
	return choose(n+k-1, k);
}
