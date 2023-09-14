#include <iostream>
using namespace std;
 
void test_case() {
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
        ok = true;
    }
 
    cout << (ok ? "YES" : "NO") << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
    
    return 0;
}