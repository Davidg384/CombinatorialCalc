#include"multichoose.cpp"
#include <iostream>
using namespace std;


int main(){
	int choice, n, k;
	cout << "Combinatorics Calculator v.1.0.0" << endl << endl;
	while(true){
		cout << "[0] Factorial \n[1] Permutation \n[2] Combination \n[3] Multicombination \n[4] Exit" << endl;
		cin >> choice;
		if(choice == 0){
			cout << "n!" << endl << "What is your n? ";
			cin >> n;
			cout << endl << n << "! = " << permute(n,n) << endl;
		}
		else if(choice == 1){
			cout << "n P k" << endl;
			cout << "What is your n? ";
			cin >> n;
			cout << "\nWhat is your k? ";
			cin >> k;
			cout << n << " P " << k << " = " << permute(n, k) << endl;
		}
		else if(choice == 2){
			cout << "n choose k" << endl;
			cout << "What is your n? ";
			cin >> n;
			cout << "\nWhat is your k? ";
			cin >> k;
			cout << n << " choose " << k << " = " << choose(n, k) << endl;
		}
		else if(choice == 3){
			cout << "n multichoose k" << endl;
			cout << "What is your n? ";
			cin >> n;
			cout << "\nWhat is your k? ";
			cin >> k;
			cout << n << " P " << k << " = " << multichoose(n, k) << endl;
		}
		else if(choice == 4){
			cout << "Exiting . . ." << endl;
			break;
		}

	}
	return 0;
}
