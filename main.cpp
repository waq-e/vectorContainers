#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
	// Three ways of declaring and initializing vectors.
	vector<int> v_1{0, 1, 2};
	vector<int> v_2 = {3, 4, 5};
	vector<int> v_3;
	v_3 = {6};
	cout << "Everything worked!" << "\n";
}