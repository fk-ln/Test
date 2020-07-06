/*
GitHubのテスト用にcommit

数値x(10進数)をn進数に変換して変換して返すプログラム
最初にxを入力した後，続けてn(2<=n<=10)を入力
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[255];
    int count = 0;
    int x;//変換する数
    int n;//n進数
    int tmp;

    std::cout << "Input Number: ";
    std::cin >> x;
    std::cout << "Input Base Number: ";
    std::cin >> n;
    std::cout << "Input: " << x << " (n=10)\n";

    while (x >= n){
        a[count] = x % n;
        x = x / n;
        count++;
    }
    a[count] = x % n;

    std::cout <<"Output: ";
    for (int i = 0; i <=(count+1) / 2; i++){
        tmp = a[i];
        a[i] = a[count - i];
        a[count - i] = tmp;
    }

    for (int i = 0; i < count+1;i++){
        std::cout << a[i];
    }

    printf(" (n=%d)", n);
}

