#include "start.h"

start::start() {}

void start::first()
{
    long long int a;
    long long int b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
}
void start::second()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    if (((a+b)>c) && ((b+c)>a) && ((a+c)>b))
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}

void start::third()
{
    long long int data;
    long long int count=0;
    std::vector<long long int> arr;
    for (int i=0;i<100000; i++)
    {
        std::cin >> data;
        arr.push_back(data);
    }
    for(int i=1;i<100000;++i)
    {
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
            count++;
    }
    std::cout << count << std::endl;
}

void start::fourth()
{
    long long int teg_num;
    std::vector<long long int> tasks;
    long long int sum=0;
    std::cin >> teg_num;
    for (long long int i=0; i<teg_num; i++)
    {
        if (i==0 || i==1)
            tasks.push_back(1);
        else
            tasks.push_back(tasks[i-1]+tasks[i-2]);
        sum+=tasks[i];
    }
    std::cout << sum << std::endl;
}

void start::fifth()
{
    double a,b,c;
    double x1, x2;
    std::cin >> a >> b >> c;
    if (a!=0)
    {
        double diskr= b*b-4*a*c;
        if (diskr<0)
            std::cout << "0" << std::endl;
        if (diskr==0)
        {
            x1=(-b)/(2*a);
            std::cout << "1\n" << std::fixed << std::setprecision(6) << x1 << std::endl;
        }
        if (diskr>0)
        {
            x1=(-b+sqrt(diskr))/(2*a);
            x2=(-b-sqrt(diskr))/(2*a);
            if (x2>x1)
                std::cout << "2\n" << std::fixed << std::setprecision(6) << x1 << " " << x2 << std::endl;
            else std::cout << "2\n" << std::fixed << std::setprecision(6) << x2 << " " << x1 << std::endl;
        }
    } else
        std::cout << "0" << std::endl;
}

void start::six()
{
    int a,b,c,d;
    int count=0;
    std::vector<int> number;
    std::vector<int> value;

    std::cin >> a >> b >> c >> d;
    number.push_back(a);
    number.push_back(b);
    number.push_back(c);

    while(d>0)
    {
        int temp = d/10;
        int digit = d-temp*10;
        d=temp;
        value.push_back(digit);
    }

    for (auto i : value)
    {
        auto it=std::find(number.begin(),number.end(),i);
        if (it==number.end())
        {
            number.push_back(i);
            count++;
        }
    }
    std::cout << count << std::endl;
}

void start::seven()
{
    std::string text_string;
    std::vector<std::string> full_text;
    std::vector<std::string> words;
    int count=0;
    while(getline(std::cin, text_string))
    {
        if (text_string.empty()) break;
        full_text.push_back(text_string);
    }
    for (auto i : full_text)
    {
        std::stringstream ss(i);
        std::string word;
        while (ss>> word)
        {
            words.push_back(word);
        }
    }

    std::sort(words.begin(),words.end());
    auto it = unique(words.begin(), words.end());
    words.erase(it, words.end());

    for (auto i : words)
    {
        count++;
    }
    std::cout << count << std::endl;
}

void start::eight()
{
    std::vector<int> number_arr;
    int count=0;
    int new_number;
    while(std::cin >> new_number)
    {
        number_arr.push_back(new_number);
    }
    for (int i=1; i< number_arr.size() ;i++)
    {
        if (number_arr[i]<=number_arr[i-1])
        {
            count =1;
            break;
        }
    }
    if (count==0)
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}

void start::nine()
{
    int n,m,k;
    std::cin >> n >> m >> k;
    int A_matr[n][m];
    int B_matr[m][k];
    int C_matr[n][k];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        {
            C_matr[i][j]=0;
        }
    }
    int temp = 0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            std::cin >> temp;
            A_matr[i][j]=temp;
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<k;j++)
        {
            std::cin >> temp;
            B_matr[i][j]=temp;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        {
            for (int l=0;l<m;l++)
            {
                C_matr[i][j]+=A_matr[i][l]*B_matr[l][j];
            }
        }
    }
    for (int i=0;i<k;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout << C_matr[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

void start::ten()
{
    long long int a, b;
    std::cin >> a >> b;
    std::vector<long long int> HOD_mnog1;
    std::vector<long long int> HOD_mnog2;
    std::vector<long long int> HOK_mnog1;
    long long int HOD=1, HOK=1;
    int temp=1;
    if(a<b) //на выходе получаем А больше Б
    {
        temp=a;
        a=b;
        b=temp;
    }
    for (long long int i=2;i<=a;i++)
    {
        while (a%i==0)
        {
            HOD_mnog1.push_back(i);
            a=a/i;
        }
    }
    for (long long int i=2;i<=b;i++)
    {
        while (b%i==0)
        {
            HOD_mnog2.push_back(i);
            b=b/i;
        }
    }

    for (auto i: HOD_mnog2)
    {
        i=*HOD_mnog2.begin();
        auto result1 = std::find(HOD_mnog1.cbegin(), HOD_mnog1.cend(), i);
        auto index1 = result1 - HOD_mnog1.cbegin();
        auto result2 = std::find(HOD_mnog2.cbegin(), HOD_mnog2.cend(), i);
        auto index2 = result2 - HOD_mnog2.cbegin();
        if (result1 != HOD_mnog1.cend())
        {
            HOD*=i;
            HOD_mnog1.erase(HOD_mnog1.begin()+index1);
            HOD_mnog2.erase(HOD_mnog2.begin()+index2);
            HOK_mnog1.push_back(i);
        } else
        {
            HOK_mnog1.push_back(i);
            HOD_mnog2.erase(HOD_mnog2.begin()+index2);
        }

    }
    for(auto i:HOD_mnog1)
    {
        HOK_mnog1.push_back(i);
    }

    for(auto i:HOK_mnog1)
    {
        HOK*=i;
    }

    std::cout << HOD << " " << HOK << std::endl;
}

void start::eleven()
{
    int number;
    std::map<std::string,std::string> dictionary;
    std::string sinonim1;
    std::string sinonim2;
    std::string ask;
    std::cin >> number;
    for (int i=0;i<number;i++)
    {
        std::cin >> sinonim1 >> sinonim2;
        dictionary.insert(std::pair<std::string,std::string>(sinonim1,sinonim2));
    }

    std::cin >>ask;
    for (auto it : dictionary)
    {
        if(it.second==ask)
            std::cout << it.first << std::endl;
        if(it.first==ask)
            std::cout << it.second << std::endl;
    }
}

