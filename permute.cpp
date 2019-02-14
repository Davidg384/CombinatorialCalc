unsigned long long int permute(long int n, long int k){
	unsigned long long int product = 1;
	for(int i = 0; i < k; i++){
		product *= n;
		n--;
	}
	return product;
}
