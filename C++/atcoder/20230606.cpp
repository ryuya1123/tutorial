#include <bits/stdc++.h>


void ABC300_task_B(){

    // input
    int H, W = 0;
    std::vector<std::vector<char>> grid_A;
    std::vector<std::vector<char>> grid_B;
    bool result = true;

    std::cin >> H >> W;
    for(int i = 0; i < H; i++){
        std::vector<char> grid_W;
        for(int j = 0; j < W; j++){
            char item;
            std::cin >> item;
            grid_W.push_back(item);
        }
        grid_A.push_back(grid_W);
    }
    for(int i = 0; i < H; i++){
        std::vector<char> grid_W;
        for(int j = 0; j < W; j++){
            char item;
            std::cin >> item;
            grid_W.push_back(item);
        }
        grid_B.push_back(grid_W);
    }

    // swap
    char index = '.';
    
    for(int k = 0; k < W; k++){
        for (int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(j==(W-1)){
                    grid_A[i][j-1] = grid_A[i][j];
                    grid_A[i][j] = index;
                }
                else if(j == 0){
                    index = grid_A[i][j];
                }
                else{
                    grid_A[i][j-1] = grid_A[i][j];
                }
            }
        }
        for (int l = 0; l < H; l++){
            result = true;
            for (int i = 0; i < W; i++){
                for(int j = 0; j < H; j++){
                    if(j==(H-1)){
                        grid_A[j-1][i] = grid_A[j][i];
                        grid_A[j][i] = index;
                    }
                    else if(j == 0){
                        index = grid_A[j][i];
                    }
                    else{
                        grid_A[j-1][i] = grid_A[j][i];
                    }
                }
            }
            // check
            for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                    if (grid_A[i][j] != grid_B[i][j]){
                        result = false;
                    }
                }
            }
            if(result){
                std::cout << "Yes";
                break;
            } 
        }
        if(result) break;
    }
    if(!result){
        std::cout << "No";
    }
    
    /*
    std::cout << std::endl;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            std::cout << grid_A[i][j];
        }
        std::cout << std::endl;
    }
    */
}

void ABC297_task_A(){
    int N = 0;
    long long D = 0;
    std::vector<long long> T;

    std::cin >> N >> D;
    if (N == 1) {
        std::cout << "-1";
    }
    else{
        for (int i = 0; i < N; i++) {
            long long t = 0;
            std::cin >> t;
            T.push_back(t);
        }
        for (int i = 0; i < T.size()-1; i++){
            if((T[i+1] - T[i]) <= D){
                std::cout << T[i+1];
                break;
            }
            if(i == T.size()-2) std::cout << "-1";
        }
    }
}

int main(){
    ABC297_task_A();
    return 0;
}
