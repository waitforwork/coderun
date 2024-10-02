#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <algorithm>



int main()
{
    int N,x,answer=0;
    std::cin >> N;
    int array[N];
    for (int i=0;i<N;i++)
        std::cin >> array[i];
    std::cin >> x;
    while(!answer)
    {
    for (int i=0;i<N;i++)
    {
        if (x==array[i])
        {
            answer = array[i];
            break;
        } else
        {
            x--;
        }
    }
    }
    std::cout << "Hello";

    return 0;
}
