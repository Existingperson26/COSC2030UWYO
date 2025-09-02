#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char*argv[]){
	if (argc - 1 <= 10){
		int sum = 0;
		for (int i = 1; i < argc; i++){
			sum += std::atoi(argv[i]);
	}
		cout << "The sum of the " << argc - 1 << " numbers submitted is: " << sum << "!" <<  endl;
	} else {
		cout << "Error! Too many inputs! Please only insert 10 numbers!" << endl;
	}
	return 0;
}
