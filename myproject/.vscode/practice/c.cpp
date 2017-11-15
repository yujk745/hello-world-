#include <iostream>
using namespace std;

int main()
{
    char input[100][100] = {0};
    int N;

    cout << "N을 입력: ";
    cin >> N;

    cin.ignore();

    int i;
    while (i < N)
    {
        cin.getline(input[i], 100);
        i++;
    }
}