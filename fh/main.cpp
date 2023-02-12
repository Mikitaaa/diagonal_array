#include <iostream>
#include <iomanip>

using namespace std;
int main() {
int n, m, num = 1;
cin >> n >> m;
    int  a[n][m];
    for(int d = 0; d < m + n - 1; d++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i + j == d){
                    a[i][j] = num;
                    num++;
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<setw(4)<<a[i][j];
        }
        cout << endl;
    }
return 0;
}
