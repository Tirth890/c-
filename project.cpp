// q1
// #include <iostream>
// using namespace std;

// int main() {
   

    
//     for (int i = 41; i <=45; i++) {

//         for (int j = 41; j<=i; j++) {
//             cout << j<< " ";
//         }
//         cout << endl; 
//     }

//     return 0;
// }



// q2
// 
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 1;  
//     for (int i = 1; i <= 5; i++) { 
    
//         for (int j = 1; j <= i; j++) {
//             cout << n +10<< " ";  
//             n++;  
//         }
//         cout << endl;  
//     }

//     return 0;
// }


// Q3
// #include <iostream>
// using namespace std;
// main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k < i; k++)
//         {

//             cout << (" ");
//         }

//         for (int j = 5; j >= i; j--)
//         {
//             if (j % 2 == 0)
//             {

//                 cout << ("0");
//             }

//             else
//             {

//                 cout << ("1");
//             }
//         }

//         cout << ("\n");
//     }
// }


// q4
// #include <iostream>
// using namespace std;

// main()
// {

//     for (int i = 5; i >= 1; i--)
//     {

//         for (int k = i; k > 1; k--)
//         {
//             cout << (" ");
//         }

//         for (int j = i; j <= 5; j++)
//         {
//             cout << ("%d", j);
//         }

//         for (int j = 4; j >= i; j--)
//         {
//             cout << ("%d", j);
//         }

//         cout << (" \n");
//     }
// }

// q5
// #include <iostream>
// using namespace std;

// int main() {

//     for (int i = 1; i <= 5; ++i) {
//         cout << i;
//     }
//     for (int i = 4; i >= 1; --i) {
//         cout << i;
//     }
//     cout << endl;
//     return 0;
// }


// q6

// #include <iostream>
// using namespace std;

// main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout << ("%d", j);
//         }

//         for (int k = i; k < 5; k++)
//         {
//             cout << (" ");
//         }
//         for (int k = i; k < 5; k++)
//         {
//             cout << (" ");
//         }

//         for (int j = i; j >= 1; j--)
//         {
//             cout << ("%d", j);
//         }

//         cout << ("\n");
//     }
// }

// q7


#include <iostream>
using namespace std;
main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            if ((i == 1 || i == 3) || j == 1)
            {
                cout << (" *");
            }

            if (i == 2 && j == 5)
            {
                cout << ("       *");
            }
        }
        cout << ("\n");
    }
}


