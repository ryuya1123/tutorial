#include <bits/stdc++.h>


void ABC298_task_A(){
    int N;
    std::string S;

    std::cin >> N >> S;
    
    int o_indivual = 0;
    int x_indivual = 0;
    for (int i = 0; i < N; i++){
        if(S[i] == 'o'){
            o_indivual++;
        }
        else if (S[i] == 'x'){
            x_indivual++;
        }
    }
    
    // check
    if (o_indivual > 0 && x_indivual == 0){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }
}

int main(){
    ABC298_task_A();
    return 0;
}
