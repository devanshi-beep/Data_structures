#include <iostream>
using namespace std;

bool checkprime(int n){          // return type changed to bool
    if (n <= 1) return false;    // handle 0 and negatives too
    if (n == 2) return true;
    int count = 0;

    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            count++;
            if (n / i != i){
                count++;
            }
        }
    }

    return (count == 2);
}

int main() {
    int n;
    cin >> n;
    if (checkprime(n)) cout << "true";
    else cout << "false";

}