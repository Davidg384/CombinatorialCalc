int permute(int n, int k){
	int product = 1;
	for(int i = 0; i < k; i++){
		product *= n;
		n--;
	}
	return product;
}
