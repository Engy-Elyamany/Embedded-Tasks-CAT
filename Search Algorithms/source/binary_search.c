#include "../search.h"


int binary_search(int arr[], int l, int r, int key, int * iter){
   int m = 0;
   *iter = 0;
    while(l<=r){
        m = (l+r)/2;
        (*iter)++;
        if(arr[m] == key){
            return m;
        }
        else if(arr[m]>key){
            r = m-1;
        }
        else{
            l= m+1;
        }
    }
    return -1;
}