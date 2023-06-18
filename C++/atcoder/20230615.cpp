#include <bits/stdc++.h>


void ABC289_task_A(){
    std::string S;
    std::cin >> S;

    for (int i = 0; i < S.size(); i++){
        if (S[i] == '0'){
            S[i] = '1';
        }
        else {
            S[i] = '0';
        }
    }

    std::cout << S;
}

int main(){
    ABC289_task_A();
    return 0;
}
