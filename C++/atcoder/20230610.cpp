#include <algorithm>
#include <bits/stdc++.h>


void ABC294_task_A(){
    int N;
    std::vector<int> A;
    std::cin >> N;
    for (int i = 0; i < N; i++){
        int a = 0;
        std::cin >> a;
        A.push_back(a);
    }

    std::vector<int> result;
    for (int i = 0; i < N; i++){
        if (A[i]%2 == 0){
            result.push_back(A[i]);
        }
    }

    for (int i = 0; i < result.size(); i++){
        if (i == result.size() - 1){
            std::cout << result[i];
        }
        else{
            std::cout << result[i] << " ";
        }
    }
}


void ABC294_task_B(){
    int H, W = 0;
    std::vector<std::vector<int>> A;

    std::cin >> H >> W;
    for ( int i = 0; i < H; i++){
        std::vector<int> a;
        for ( int j = 0; j < W; j++){
            int b = 0;
            std::cin >> b;
            a.push_back(b);
        }
        A.push_back(a);
    }   

    std::vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
        'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    std::vector<std::vector<char>> S;
    
    for(int i = 0; i < H; i++){
        std::vector<char> s;
        for (int j = 0; j < W; j++){
            if(A[i][j] == 0){
                s.push_back('.');
            }
            else{
                s.push_back(alphabet[A[i][j] - 1]);
            }
        }
        S.push_back(s);
    }
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            std::cout << S[i][j];
        }
        std::cout << std::endl;
    }
}


int main(){
    ABC294_task_B();
    return 0;
}
