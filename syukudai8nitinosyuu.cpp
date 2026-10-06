#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "人数（n）を入力してください: ";
    cin >> n;

    
    if (n <= 0) 
    {
        cout << "1以上の人数を入力してください。" << endl;
        return 1;
    }

    
    int* scores = new int[n];
    int sum = 0;

   
    for (int i = 0; i < n; i++) 
    {
        cout << i + 1 << "人目の点数: ";
        cin >> scores[i];
        sum += scores[i]; 
    }

   
    double average = static_cast<double>(sum) / n;

   
    cout << "\n--- 結果 ---" << endl;
    cout << "合計値: " << sum << " 点" << endl;
    cout << "平均値: " << average << " 点" << endl;

    
    delete[] scores;

    return 0;
}