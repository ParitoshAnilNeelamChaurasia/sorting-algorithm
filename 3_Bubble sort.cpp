// bring the largest element towards right at each pass

// Time complexity -> O(N^2) 
// Number of passes -> n-1

// ex -> {7,11,9,2,17,4}

Ist pass
/* (7,11) -> (7,11)  -> {7,11,9,2,17,4}
   (11,9) -> (9,11)  -> {7,9,11,2,17,4}
   (11,2)  -> (2,11)  -> {7,9,2,11,17,4}
   (11,17) -> (11,17) -> {7,9,2,11,17,4}
   (17,4) -> (4,17)   -> {7,9,2,11,4,17}
*/

IInd pass
/*
  (7,9) -> (7,9)  -> {7,9,2,11,4,17}
  (9,2)  -> (2,9)  -> {7,2,9,11,4,17}
  (9,11) -> (9,11)  -> {7,2,9,11,4,17}
  (11,4)  -> (4,11)  -> {7,2,9,4,11,17}
*/

IIIrd pass
/*
  (7,2) -> (2,7) -> {2,7,9,4,11,17}
  (7,9)  -> (7,9) -> {2,7,9,4,11,17}
  (9,4)  -> (4,9) -> {2,7,4,9,11,17}
*/

IVth pass
/*
  (2,7) -> (2,7) -> {2,7,4,9,11,17}
  (7,4) -> (4,7) -> {2,4,7,9,11,17}
*/

Vth pass

/*
  (2,4) -> (2,4) -> {2,4,7,9,11,17}
*/
#include<bits/stdc++.h>
using namespace std ;

void bubble_sort(vector<int> &a , int n)
{
    int idx ;
    int temp ;

    for(int i = 0 ; i < n-1 ; ++i)
    {
        for(int j = 0 ; j < n - i - 1 ; ++j)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] , a[j+1]) ;
            }
        }
    }

}
int main()
{
    vector<int> a = {1,32,3,2,1} ;

    bubble_sort(a,a.size()) ;
    
    for(int &it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl ;

}
