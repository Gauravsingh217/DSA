#include<bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        largest = max(nums[i], largest);
    }
    cout<<"largest = "<<largest<<endl;
    return 0;
}