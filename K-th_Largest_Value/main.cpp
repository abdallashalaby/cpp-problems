#include <iostream>

using namespace std;

int main(){
    int q, n, q_type, q_arg;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> q_type >> q_arg;
        if(q_type == 1){
            a[q_arg - 1] = 1 - a[q_arg - 1];
            cout << a[q_arg - 1] << endl;
        }
    }


    return 0;
}