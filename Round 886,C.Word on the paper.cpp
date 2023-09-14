#include <iostream>
using namespace std;
void test_case(){
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = true;
    ok != (a + b >= 10);
    ok != (a +  c >= 10);
    ok != (b + c >= 10);
    cout << (ok ? "YES" : "NO");
}
int main(){
    int t;
    cin >> t;
    while (t--){
        test_case();
    }
  
}
 