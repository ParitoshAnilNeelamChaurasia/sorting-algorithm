// not a stable algo. since the smalllest eleent is replaced with the first element at each pass, 
// it may jumble up positions of equal elements very easily

// T.c -> O(n2)
// maximum no. of passes -> n-1


#include<bits/stdc++.h>
using namespace std ;

void selectionsort(vector<int> &a , int n)
{
    int idx ;
    int temp ;

    for(int i = 0 ; i < n-1 ; ++i)
    {
        idx = i ;
        for(int j = i+1 ; j < n ; ++j)
        {
            if(a[j] < a[idx])
            {
                idx = j ;
            }
        }
        swap(a[i] , a[idx]) ;
        // temp = a[i] ;
        // a[i] = a[idx] ;
        // a[idx] = temp ;
    }
}
int main()
{
    vector<int> a = {1,32,3,2,1} ;

    selectionsort(a,a.size()) ;
    
    for(int &it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl ;

}
