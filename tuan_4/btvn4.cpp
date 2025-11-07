// Tính tổng từ 1 đến 5
// Kết quả kỳ vọng: sum = 15
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    cout << "Tong la: " << sum << endl;

    return 0;
}
