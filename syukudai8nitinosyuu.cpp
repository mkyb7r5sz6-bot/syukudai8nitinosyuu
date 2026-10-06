#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "人数（n）を入力してください: ";
    cin >> n;

    // 入力チェック（1人以上の場合のみ配列を確保）
    if (n <= 0) {
        cout << "1以上の人数を入力してください。" << endl;
        return 1;
    }

    // n名分の配列を動的に確保
    int* scores = new int[n];
    int sum = 0;

    // 点数の入力と合計の計算
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "人目の点数: ";
        cin >> scores[i];
        sum += scores[i]; // 入力された点数を合計に加算
    }

    // 平均値の計算（実数にするため double にキャスト）
    double average = static_cast<double>(sum) / n;

    // 結果の出力
    cout << "\n--- 結果 ---" << endl;
    cout << "合計値: " << sum << " 点" << endl;
    cout << "平均値: " << average << " 点" << endl;

    // 動的に確保したメモリを解放
    delete[] scores;

    return 0;
}