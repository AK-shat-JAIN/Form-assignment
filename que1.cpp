/*
Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
a. 1 <= nums.length <= 10^4
b. -2^31 <= nums[i] <= 2^31 - 1
*/

#include<bits/stdc++.h>
using namespace std;

void movezero(int* a, int n){
    int l=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[l]=a[i];
            l++;
        }
    }
    while(l<n){
        a[l]=0;
        l++;
    }
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    movezero(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }

    return 0;
}