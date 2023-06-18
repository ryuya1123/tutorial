#include <bits/stdc++.h>


void task_A(){
    int N, A, B = 0;
    std::vector<int> C;
    int A_B = 0;
    size_t index = 0;

    std::cin >> N >> A >> B;


    for (int i=0; i < N; i++){
        int C_number;
        std::cin >> C_number;
        C.push_back(C_number);
    }

    A_B = A + B;
    for (auto i = C.begin(); i != C.end(); i++, index++){
        if (*i == A_B){
            std::cout << index+1; 
        }

    }
}

void task_A_2(){
    int N = 0;
    std::string S;
    int count = 0;
    int count_asta = 0;

    std::cin >> N >> S;
    
    for (int i = 0; i < N; i++){
        if(S[i] == '|'){
            count++;
        }
        if(count == 1){
            if ( S[i] == '*' ){
                count_asta++;
            }
        }
    }

    (count_asta > 0) ? std::cout << "in" : std::cout << "out";
}

void task_B(){
    int H, W = 0;
    std::vector<std::vector<char>> grid;

    std::cin >> H >> W;
    for(int i = 0; i < H; i++){
        std::vector<char> grid_W;
        for(int j = 0; j < W; j++){
            char item;
            std::cin >> item;
            grid_W.push_back(item);
        }
        grid.push_back(grid_W);
    }


}

int main(){
    task_A_2();
    return 0;
}
