#include <iostream>
using namespace std;
// Func to check if string are the same
bool vn(string a) {
    if(a == "Co"){
        return true;
    }
    else { return false;  }
}

// Main func
int main() {
    string ask; 
    cout << "May co phai nguoi vn ko? \n"; cin >> ask;
    vn(ask) ? cout << "May la nguoi vn" << endl : cout << "May la nguoi trung quoc" << endl;
    return 0;

}
