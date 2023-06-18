#include <bits/stdc++.h>


void ABC292_task_A(){
    std::string S;
    std::cin >> S;

    std::transform(S.cbegin(), S.cend(), S.begin(), toupper);
    std::cout << S;
}

int main(){
    ABC292_task_A();
    return 0;
}
