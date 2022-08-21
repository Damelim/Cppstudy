///* Test rand() distribution by throwing a die repeatedly (TestRandomDie.cpp) */
//#include <iostream>
//#include <iomanip>
//#include <cstdlib>  // for rand(), srand()
//#include <ctime>    // for time()
//using namespace std;
//
//const int TOTAL_COUNT = 2000000;  // Close to INT_MAX
//const int NUM_FACES = 6;
//int frequencies[6] = { 0 }; // frequencies of 0 to 5, init to zero
//
//int main() {
//    srand(time(0)); // seed random number generator with current time
//    // Throw the die and count the frequencies
//    for (int i = 0; i < TOTAL_COUNT; ++i) {
//        ++frequencies[rand() % 6];
//    }
//
//    // Print statistics
//    cout << fixed << setprecision(2);
//    for (int i = 0; i < NUM_FACES; i++) {
//        cout << i + 1 << ": " << frequencies[i]
//            << " (" << 100.0 * frequencies[i] / TOTAL_COUNT << "%)" << endl;
//    }
//}