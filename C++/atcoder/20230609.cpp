#include <bits/stdc++.h>


int ctoi(char c){
    return c - '0';
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
                if (B[i][j] == index[k]){
                    for ( int l = 0; l < R; l++){
                        for (int m = 0; m < C; m++){
                            if ((l != i || m != j) &&
                                        (*std::find(index.begin(), index.end(), B[l][m]) == B[l][m])){
                                // nothing
                            }else{
                                int ans = abs(i - l) + abs(j - m);
                                int convert_index = ctoi(index[k]);
                                if (ans <= convert_index){
                                    B[l][m] = '.';
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < R; i++){
        std::cout << B[i] << std::endl;
    }
}

int main(){
    ABC295_task_B();
    return 0;
}
