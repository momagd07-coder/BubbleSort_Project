#include <iostream>
#include <vector>
using namespace std ;
void bubble(vector <int> &g,int n){
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(g[j]>g[j+1])
        {
            int x = g[j] ;
             g[j]= g[j+1] ;
             g[j+1] = x ;
        }
    }
}
cout<<"Sorted array : "<< endl;
for(int i=0;i<n;i++)
cout<< "{"<< g[i] <<"} " ;
cout << endl ;
}
int main (){
    int n =0 ;
    cout << "How many numbers in the array : ";
    cin >> n ;
    vector <int> g(n);
cout << "Enter the numbers to sort :" ;
for(int k=0;k<n;k++)
    {cin >> g[k] ;}
bubble(g,n) ;
}
