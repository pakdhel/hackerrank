#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    char c;
    
    cin >> a;
    cin >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    
    cout << a << " " << b << endl;
    return 0;
}
