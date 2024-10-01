#include <iostream>
#include <string>
#include <vector>
#include <list>

#include <algorithm>



int main()
{
    int a, b;
    std::cin >> a >> b;
    std::vector<int> HOD_mnog1;
    std::vector<int> HOD_mnog2;
    std::vector<int> HOK_mnog1;
    std::vector<int> HOK_mnog2;
    int HOD=1, HOK=1;
    int temp=1;
    if(a<b) //на выходе получаем А больше Б
    {
        temp=a;
        a=b;
        b=temp;
    }
    for (int i=2;i<=a;i++)
    {
        while (a%i==0)
        {
            HOD_mnog1.push_back(i);
            a=a/i;
        }
    }
    for (int i=2;i<=b;i++)
    {
        while (b%i==0)
        {
            HOD_mnog2.push_back(i);
            b=b/i;
        }
    }

    for(auto i : HOD_mnog1)
    {
        HOD*=i;
    }
    for (auto i: HOD_mnog2)
    {
        if (std::count(HOD_mnog1.begin(),HOD_mnog1.end(),i))
            HOD*=i;
    }



    int for_HOK;

    // необходимо разложить на простые множители а и б
    // записать их в вектор, сравнить
    for (int i=1;i<=b;i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            if (i>HOD)
            {
                HOD=i;
            }
        }
    }
    for_HOK=a; //делаем енр наибольшим из двух
    // необходимо разложить а и б на простые множители
    while(temp)
    {
        if ((for_HOK%a==0) && (for_HOK%b==0))
        {
            HOK=for_HOK;
            temp=0;
        }
        for_HOK++;
    }
    std::cout << HOD << " " << HOK << std::endl;

    return 0;
}


