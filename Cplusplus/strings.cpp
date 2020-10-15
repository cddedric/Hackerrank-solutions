/*
https://www.hackerrank.com/challenges/c-tutorial-strings/
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b,temp;

    std::cin >> a >> b;

    std::cout << a.size() << " " << b.size() << endl;
    std::cout << a+b << endl;
    
    temp[0]=a[0];
    temp[1]=b[0];
    a[0]=temp[1];
    b[0]=temp[0];
    std::cout << a << " " << b;

  
    return 0;
}
