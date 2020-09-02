#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

int main()
{
    ll num;
    cin >> num;
    if (num == 1)
    {
        cout << 1;
        return 0;
    }
    ll factor = 2;
    string answer = "";
    while (num != 1)
    {
        if (factor > sqrt(num))
        {
            answer += "*"+to_string(num);
            num /= num;
        }
        else
        {
            if (num % factor == 0)
            {
                answer += "*"+to_string(factor);
                num /= factor;
            }
            else
                factor++;
        }
    }
    answer.erase(0, 1);
    cout << answer;

    return 0;
}
