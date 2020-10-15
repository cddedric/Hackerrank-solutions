/*
https://www.hackerrank.com/challenges/c-tutorial-stringstream/
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str); //create stringstream of strings
    vector<int> result;     // create a vector of integers for output
    char ch = ',';
    int temp;

    while (ss){         // while stringstream does not get a null
        ss>>temp>>ch;   // extract the comma separated integer in pieces
        result.push_back(temp); // push the integer onto result vector
    }

    return result;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
