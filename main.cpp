#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Vectors are a sequence of elements of a single type, and have useful methods
// for getting the size, testing if the vector is empty, and adding elements to
// the vector.
int main() {
	// Three ways of declaring and initializing vectors.
	vector<int> v_1{0, 1, 2};    // initialization list
	vector<int> v_2 = {3, 4, 5}; // initialization list
	vector<int> v_3;
	v_3 = {6};
	cout << "Everything worked!"
	     << "\n";

	// Creating a 2D vector.
	vector<vector<int>> v{{1, 2},
	                      {3, 4}};
	cout << "Great! A 2D vector has been created." << "\n";
}