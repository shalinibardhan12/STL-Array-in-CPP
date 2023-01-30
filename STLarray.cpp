#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();                    //  a.size  give size of array;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"element at 2nd index -> "<<a.at(2)<<endl;            // a.at(2)  give vale of 2nd element of array;
    cout<<"empty or not "<<a.empty()<<endl;                     //a.empty tell that array is empty or not;
    cout<<"first element of array "<<a.front()<<endl;            //a.front give first element of array;
     cout<<"2nd element of array "<<a.back()<<endl;                   //a.back give 2nd element of array;
}