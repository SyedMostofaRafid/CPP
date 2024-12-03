#include <iostream>

using namespace std;

void findCallerCallee(int N, int P, int K) {
    if (K == 0) {
        cout << "Caller: " << N << ", Callee: " << N - P << "\n";
        return;
    }

    int caller = N - (K / P);
    int callee = N - ((K - 1) / P);
    cout << "Caller: " << caller << ", Callee: " << callee << "\n";

    findCallerCallee(callee, P, K - 1);
}

int main() {
    int N, P, K;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the value of P: ";
    cin >> P;
    cout << "Enter the value of K: ";
    cin >> K;

    cout << "Caller and Callee numbers for the K-th recursive call:\n";
    findCallerCallee(N, P, K);

    return 0;
}
