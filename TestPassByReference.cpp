///* Test Pass-by-reference for fundamental-type parameter
//   via reference declaration (TestPassByReference.cpp) */
//#include <iostream>
//using namespace std;
//
//int squareByValue(int number);        // Pass-by-value
//void squareByReference(int& number); // Pass-by-reference
//
//int main() {
//	int n1 = 8;
//	cout << "Before call, value is " << n1 << endl;  // 8
//	cout << squareByValue(n1) << endl;  // no side-effect
//	cout << "After call, value is " << n1 << endl;   // 8
//
//	int n2 = 9;
//	cout << "Before call, value is " << n2 << endl;  // 9
//	squareByReference(n2);  // side-effect
//	cout << "After call, value is " << n2 << endl;   // 81
//}
//
//// Pass parameter by value - no side effect
//int squareByValue(int number) {
//	return number * number;
//}
//
//// Pass parameter by reference by declaring as reference (&)
//// - with side effect to the caller
//void squareByReference(int& number) {
//	number = number * number;
//}