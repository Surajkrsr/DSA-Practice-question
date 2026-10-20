#include <iostream>
using namespace std;
int main(){
    int arr[6] = {3, 6, 1, 4, 3, 9};
    int max = arr[0];
    for(int i = 0; i < 6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max;
    return 0;
}