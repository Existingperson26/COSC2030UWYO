#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int AddUp(char*A[], int n);

int main(int argc, char*argv[]){
	if (argc - 1 <= 10){
		int finalSum = AddUp(argv, argc);
		cout << "The sum of the " << argc - 1 << " numbers submitted is: " << finalSum << "!" <<  endl;
	} else {
		cout << "Error! Too many inputs! Please only insert 10 numbers!" << endl;
	}
	return 0;
}

int AddUp(char*A[], int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		sum += std::atoi(A[i]);
	}
	return sum;
}

