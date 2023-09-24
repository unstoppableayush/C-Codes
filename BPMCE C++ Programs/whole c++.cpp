//INLINE FUNCTION
// #include<iostream>
// using namespace std;
// inline int max(int a,int b){
    
//     return a>b?a:b;
// }
// int main(){
//     int a,b;
//     cout<<"Enter two values:"<<endl;
//     cin>>a>>b;
//     cout<<"Max:"<<max(a,b);
//     return 0;
// }


//PASSING AN ARRAY BY POINTER
// #include<iostream>
// using namespace std;
// int func_array(int num[],int n){
//     int total=0,i;
//     for(int i=0;i<n;i++){
//         total=total+num[i];
//     }
//     return total;
// }
// int main(){
//     int arr[10],i,sum;
//     cout<<"Enter 10 values:"<<endl;
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     sum=func_array(arr,10);
//     cout<<"Sum="<<sum;
//     return 0;
// }


//REFRENCE VARIABLE
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<&x<<endl;
    cout<<&y;
}

//passing more than one value back to the unc
