// Кирпа Артемий ЭФБО-08-26

// ЗАДАНИЕ 1  РЕШЕНИЕ ЧЕРЕЗ FOR 

// #include <iostream>
// using namespace std;
// int main() {
//     double x, y;
//     int d = 1;
//     cin >> x >> y;
//     for (; x < y; d++) {
//         x = x * 1.1;
//     }
//     cout << d;
//     return 0;
// }




// ЗАДАНИЕ 2  решение через while

// #include <iostream>
// using namespace std;
// int main() {
//     double x, y;
//     int d = 1;
//     cin >> x >> y;
//     while (x < y) {
//         x = x * 1.1;
//         d++;
//     }
//     cout << d;
//     return 0;
// }



// ЗАДАНИЕ 3  do while 


#include <iostream>
using namespace std;

int main() {
    double x, y;
    int d = 1;
    cin >> x >> y;
    do {
        if (x >= y) {
            break;
        }
        x = x * 1.1;
        d++;
    } 
    while (x < y);
    cout << d;
    return 0;
}
