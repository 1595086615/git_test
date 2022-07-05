#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(100);
    vec.push_back(200);
    vec.push_back(300);
    vec.push_back(400);
    vec.push_back(500);
    vec.push_back(600);
    for(auto it=vec.begin();it!=vec.end();it++)
        cout<<*it<<"  ";
    cout<<endl;
    
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World3!" << std::endl;

    return 0;
}
