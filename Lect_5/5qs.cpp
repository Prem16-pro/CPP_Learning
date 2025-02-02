#include <iostream>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a,b=1;
//     a=10;
//     if(++a){
//         cout<<b;
//     }else{
//         cout<<++b;
//     }
//     return 0;
// }

// op: b=1

// int main(int argc, char const *argv[])
// {
//     int a=1,b=2;
//     if(a-- && ++b>2){
//         cout << "stage1"<<endl;
//     }else{
//         cout << "stage2"<<endl;
//     }
//     cout<<a<<"  "<<b;
//     return 0;
// }
// op: stage1 a=0 b=3

// int main(int argc, char const *argv[])
// {
//     int a=1,b=2;
//     if(a-- || ++b>2){
//         cout << "stage1"<<endl;
//     }else{
//         cout << "stage2"<<endl;
//     }
//     cout<<a<<"  "<<b;
//     return 0;
// }

// op: stage1 a=0 b=2 ... since it is or it and "a>0" so "--b" is never executed!!

// int main(int argc, char const *argv[])
// {
//     int n=3;
//     cout << (25*(++n));
//     return 0;
// }
// op: 100