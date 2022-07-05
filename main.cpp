#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(i+1);
    }

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World3!" << std::endl;

    return 0;
}
