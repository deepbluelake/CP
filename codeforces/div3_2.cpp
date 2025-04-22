#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int total_sum = a + 2 * b;

        if (total_sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int half_sum = total_sum / 2;
            if (half_sum % 2 == 0 || (half_sum % 2 == 1 && a >= 1))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
