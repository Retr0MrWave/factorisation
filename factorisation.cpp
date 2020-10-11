#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

vector <ll> factorisation(ll num)
{
    if (num == 1)
    {
        vector <ll> res = {1};
        return res;
    }
    ll factor = 2;
    vector <ll> answer;
    while (num != 1)
    {
        if (factor > sqrt(num))
        {
            answer.push_back(num);
            num /= num;
        }
        else
        {
            if (num % factor == 0)
            {
                answer.push_back(factor);
                num /= factor;
            }
            else
                factor++;
        }
    }
    return answer;
}
