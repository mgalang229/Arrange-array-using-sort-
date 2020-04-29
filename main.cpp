#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int a[] = {1, 5, 4, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, a + n);
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}
