#include <iostream>
using namespace std;

/*
1
23
456
78910       when n = 4
*/

// int main (){

//     int n ;
//     cin >> n;
//     int row=1,col=1,count=1;

//     while (row<=n){
//         col = 1;
//         while (col<=row)
//         {
//             cout << count;
//             count+=1;
//             col+=1;
//         }
//         row+=1;
//         cout << endl;
        
//     }

//     return 0;
// }


/*
1
23
345
4567    n=4
*/

// int main (){
//     int n ;
//     cin >> n;

//     int r=1,c=1;

//     while (r<=n){
//         c=1;
//         while (c<=r)
//         {
//             cout << r+c-1;
//             c+=1;
//         }
//         r+=1;
//         cout<<endl;

//     }
    
//     return 0;
// }

// n=4
// 1
// 21
// 321
// 4321

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;

//     int row=1,col=1;

//     while (row<=n)
//     {   
//         col = 1;
//         while (col<=row)
//         {
//             cout << row-col+1;
//             col+=1;
//         }
//         row+=1; 
//         cout << endl;
//     }
    
//     return 0;
// }

// n=4
// AAAA
// BBBB
// CCCC
// DDDD

// int main(int argc, char const *argv[])
// {
//     int n ;
//     cin>>n;

//     int row=1,col=1;

//     while (row<=n)
//     {
//         char ch = 'A' + row -1;
//         col = 1;
//         while (col <= n )
//         {
//             cout << ch ;
//             col+=1;
//         }
//         cout << endl;
//         row+=1;
//     }
    

//     return 0;
// }

// n=4
// ABCD
// ABCD
// ABCD
// ABCD


// int main(int argc, char const *argv[])
// {
//     int n ;
//     cin>>n;

//     int row=1,col=1;

//     while (row<=n)
//     {
//         col = 1;
//         char ch = 'A' + col -1;
//         while (col <= n )
//         {
//             cout << ch ;
//             col+=1;
//             ch = 'A' + col -1;
//         }
//         cout << endl;
//         row+=1;
//     }
//     return 0;
// }

// 3
// ABC
// DEF
// GHI

// int main(int argc, char const *argv[])
// {
//     int n ;
//     cin>>n;

//     int row=1,col=1 , count = 1;

//     while (row<=n)
//     {
//         char ch = 'A' + count -1;
//         col = 1;
//         while (col <= n )
//         {
//             cout << ch ;
//             count+=1;
//             ch = 'A' + count -1;
//             col+=1;
//         }
//         cout << endl;
//         row+=1;
//     }
//     return 0;
// }

// 3
// ABC
// BCD
// CDE

// int main(int argc, char const *argv[])
// {
//     int n ;
//     cin>>n;

//     int i=1,j=1;
//     while (i<=n)
//     {
//         j=1;
//         char ch = 'A' + i - 1;
//         while (j<=n)
//         {
//             cout << ch;
//             ch+=1;
//             j+=1;
//         }
//         i+=1;
//         cout << endl;
//     }
    
//     return 0;
// }

// 3
// A
// BB
// CCC

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int i=1,j=1;

//     while (i<=n)
//     {
//         j=1;
//         char ch = 'A' + i -1;
//         while (j<=i)
//         {
//             cout << ch;
//             j+=1;
//         }
//         i+=1;
//         cout << endl ;
        
//     }
    
//     return 0;
// }

// 3
// A
// BC
// DEF

// int main(int argc, char const *argv[])
// {
//     int n ;
//     cin >> n;

//     int i=1,j=1;
//     char ch = 'A';
    
//     while (i<=n)
//     {
//         j=1;
//         while (j<=i)
//         {
//             cout << ch ;
//             ch+=1;
//             j+=1;
//         }
//         i+=1;
//         cout<<endl;
//     }
    
//     return 0;
// }

// 3
// A
// BC
// CDE

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int i=1,j=1;

//     while (i<=n)
//     {
//         j=1;

//         char ch = 'A' + i -1;
//         while (j<=i)
//         {
//             cout << ch;
//             ch+=1;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
//     return 0;
// }

// 4
// D
// CD
// BCD
// ABCD

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int i =1 , j=1 , val = n;

//     while (i<=n)
//     {
//         char ch = 'A' + val - i ; 
//         j=1; 
//         while (j<=i)
//         {
//             cout << ch ;
//             ch+=1;
//             j+=1;
//         }
//         i+=1;
//         cout<<endl;
        
//     }
    
//     return 0;
// }

// 4
//    *
//   **
//  ***
// ****

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int i = 1 , j =1;

//     while (i<=n)
//     {
//         j=1;
//         int space = n-i;
//         while(space > 0){
//             cout << " ";
//             space-=1;
//         }
//         while (j<=i)
//         {
//             cout << "*";
//             j+=1;
//         }
//         i+=1;
//         cout << endl ;
//     }
    
//     return 0;
// }

// 4
// ****
// ***
// **
// *
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n ;

//     int i = 1, j;

//     while (i<=n)
//     {
//         j=n-i+1;
//         while (j>0)
//         {
//             cout << "*";
//             j-=1;
//         }
//         i+=1;
//         cout << endl ;
//     }
    
//     return 0;
// }

// 4
// ****
//  ***
//   **
//    *

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n ;

//     int i = 1, j;

//     while (i<=n)
//     {
//         j=n-i+1;
//         int space = i - 1;
//         while (space > 0)
//         {
//             cout << " ";
//             space-=1;
//         }
//         while (j>0)
//         {
//             cout << "*";
//             j-=1;
//         }
        
//         i+=1;
//         cout << endl ;
//     }
    
//     return 0;
// }

// 4
//    1
//   121
//  12321
// 1234321

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int i=1,j=1;
//     int coutCount = 1;

//     while (i<=n)
//     {
//         int space = n-i ;
//         while (space>0)
//         {
//             cout << " ";
//             space-=1;
//         }
//         int count = 1;
//         j=1;
//         while (count > 0)
//         {
//             cout << count ;
//             if (j<i){
//                 count += 1;
//             }
//             else{
//                 count -= 1;
//             }
//             if(j==coutCount){
//                 break;
//             }
//             j+=1;
//         }
//         coutCount+=2;
//         i+=1;
//         cout << endl;
//     }
    
//     return 0;
// }

// n=5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main(int argc, char const *argv[])
{
    int n ;
    cin >> n;

    int i=1,j=1;

    while (i<=n)
    {
        j=1;
        while (j<=(n-i+1))
        {
            cout << j;
            j+=1;
        }

    int mul=(i-1)*2;
    while (mul>0)
    {
        cout << "*";
        mul-=1;
    }
    

    j=n-i+1;
    while (j>0)
        {
            cout << j;
            j-=1;
        }
        i+=1;
        cout << endl;
        
    }
    
    return 0;
}
