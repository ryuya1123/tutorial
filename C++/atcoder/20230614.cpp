#include <bits/stdc++.h>


void ABC290_task_A(){
    int N, M = 0;
    std::vector<int> A;
    std::vector<int> B;

    std::cin >> N >> M;
    for (int i = 0; i < N; i++){
        int Ai = 0;
        std::cin >> Ai;
        A.push_back(Ai);
    }
    for (int i = 0; i < M; i++){
        int Bm = 0;
        std::cin >> Bm;
        B.push_back(Bm);
    }

    int result = 0;
    for (int i = 0; i < B.size(); i++){
        result += A[B[i]-1];
    }

    std::cout << result;
}

void ABC290_task_B(){
    int N,  K = 0;
    std::string S;

    std::cin >> N >> K >> S;

    std::vector<char> result;
    int count = 0;
    for (int i = 0; i < N; i++){
        if((S[i] == 'o') && (count != K)){
            result.push_back('o');
            count++;
        }else{
            result.push_back('x');
        }
    }

    std::for_each(result.begin(), result.end(), [](char i){
                std::cout << i;
            });
}


int main(){
    ABC290_task_B();
    return 0;
}
