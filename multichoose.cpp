#include "choose.cpp"
long int multichoose(int n, int k){
	return choose(n+k-1, k);
}
