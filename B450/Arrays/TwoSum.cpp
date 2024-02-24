#include <iostream>
using namespace std;

int main()
{

    int r,tar;
    cin >> r;
    int arr[r];

    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
    }

    cin>>tar;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            // as equal i and j means same element
            // if (i == j)
            //     continue;
 
            // pair exists
            if (arr[i] + arr[j] == tar)
                cout<<i<<j;
                // return true;
 
            // as the array is sorted
            // if (arr[i] + arr[j] > tar)
            //     break;
        }
    }

    return 0;
}