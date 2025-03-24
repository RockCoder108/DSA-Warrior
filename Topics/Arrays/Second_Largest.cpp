//                                                 GFG(easy)
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    if (arr.size() < 2) return -1; // If there are fewer than 2 elements, return -1

    int largest = arr[0];
    int second = INT_MIN;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Second largest element not possible." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondLargest = getSecondLargest(arr);
    if (secondLargest == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
