//                                             Largest Element in Array             Easy
#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int> &arr) {

    int maxterm = arr[0];
    for(int i=1;i<arr.size();i++){
        if(maxterm<arr[i]){
            maxterm = arr[i];
        }
    }
    return maxterm;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Largest element: " << largest(arr) << endl;

    return 0;
}