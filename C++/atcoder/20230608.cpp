#include <bits/stdc++.h>


void ABC295_task_A(){
    int N = 0;
    std::vector<std::string> W;

    std::cin >> N;
    for (int i = 0; i < N; i++){
        std::string w;
        std::cin >> w;
        W.push_back(w);
    }

    std::vector<std::string> index = {"and", "not", "that", "the", "you"};
    bool result = false;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < index.size(); j++){
            if (W[i] == index[j]){
                std::cout << "Yes";
                result = true;
                break;
            }
        }
        if(result){
            break;
        }
    }
    if (result == false){
        std::cout << "No";
    }
}

void ABC295_task_B(){
    int R, C = 0;
    std::vector<std::string> B;

    std::cin >> R >> C;
    for (int i = 0; i < R; i++){
        std::string b;
        std::cin >> b;
        B.push_back(b);
    }

    std::vector<char> index = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < R; i++){
        for ( int j = 0; j < C; j++){
            for (int k = 0; k < index.size(); k++){
                if (B[i][j] == index[i]){
                    convert_index = std::atoi(index[i]);
                    B[i+convert_index][j] = 'a'
                }
            }
        }
    }
}

int main(){
    ABC295_task_A();
    return 0;
}
