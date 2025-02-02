#include <iostream>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i <= 5; i--)
//     {
//         cout<<i<<" ";
//         i++;
//     }
    
//     return 0;
// }
// op:infinite 0's until stopped

// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i <= 15; i+=2)
//     {
//         cout << i << " ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
    
//     return 0;
// } op: 0 3 5 7 9 11 13 15

// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout << i << " " << j << endl;
//         }
        
//     }
    
//     return 0;
// }
// op: 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i+j==10)
            {
                break;
            }
            cout << i << ' ' <<j << endl;
        }
        
    }
    
    return 0;
}
