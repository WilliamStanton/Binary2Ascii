#include <bitset>
#include <string>
#include <iostream>
#include <sstream>

/**
 * Converts individual binary string to ascii
 * @param binary binary str
 * @return ascii representation of binary str
 */
int binaryToAscii(std::string binary) {
    std::bitset<64>bin{binary};
    return bin.to_ulong();
}

/**
 * Asks for binary input, and returns full ascii representation
 * @return full ascii representation of binary input
 */
std::string getAscii() {
    using namespace std;
    string input{}; // binary str input
    string output{}; // holds binary ascii representation
    cout << "Please enter some binary to convert to ASCII:";
    getline(cin, input); // get binary string -> input
    
    istringstream iss(input); // input stream
    string temp{}; // temp str
    // binary -> ascii output
    while (getline( iss, temp, ' ' ) ) {
        output += static_cast<char>(binaryToAscii(temp)); // binary -> ascii
    }

    return output; // full ascii representation of binary str
}

/**
 * Demonstrates simple usage of app
 */
int main() {
    std::cout << getAscii(); // print result
    return 0;
}
