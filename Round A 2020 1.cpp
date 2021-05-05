#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int N, A, B, T, c = 0;
    vector<int>count;
    vector<int>prices;

    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> N >> B;
        for (int j = 0; j < N; j++){
            cin >> A;
            prices.push_back(A);
        }
        sort(prices.begin(), prices.end());
        for (int j = 0; j < N; j++){
            if (B-prices[j] >= 0){
                B -= prices[j];
                c++;
            }
        }
        prices.clear();
        count.push_back(c);
        c = 0;
    }
    for (int i = 0; i < T; i++){
        cout << "Case #" << i+1 << ": " << count[i] << endl;
    }
    return 0;
}