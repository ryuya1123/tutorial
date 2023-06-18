#include <bits/stdc++.h>


void ABC296_task_A(){
    int N = 0;
    std::string S;

    std::cin >> N >> S;
    char s;
    bool result = true;
    for (int i = 0; i < N; i++){
        if(i==0){
            s=S[i];
        }
        else{
            if(s=='F'){
                if ( S[i] == 'F'){
                    result = false;
                }
                else{
                    s = S[i];
                }
            }
            else{
                if( S[i] == 'F'){
                    s = S[i];
                }
                else{
                    result = false;
                }
            }
        }
    }
    if ( result ){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }
}

void ABC297_task_B(){
    std::vector<std::string> S;
    for (int i = 0; i < 8; i++){
        std::string s;
        std::cin >> s;
        S.push_back(s);
    }

    int vertical = 0;
    int horizontal = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (S[i][j] == '*'){
                vertical = i;
                horizontal = j;
                break;
            }
        }
    }
    
    std::vector<char> vertical_index = {'8', '7', '6', '5', '4', '3', '2', '1'};
    std::vector<char> horizontal_index = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    std::cout << horizontal_index[horizontal] << vertical_index[vertical];
}

void ABC304_task_B(){
    long long N = 0;
    std::cin >> N;

    if( N < (1000-1) ){
        // nothing
    }
    else if ((N/std::pow(10, 3)) < 10){
        N = N/std::pow(10, 1);
        N *= std::pow(10, 1);
    }
    else if ((N/std::pow(10, 4)) < 10){
        N = N/std::pow(10, 2);
        N *= std::pow(10, 2);
    }
    else if ((N/std::pow(10, 5)) < 10){
        N = N/std::pow(10, 3);
        N *= std::pow(10, 3);
    }
    else if ((N/std::pow(10, 6)) < 10){
        N = N/std::pow(10, 4);
        N *= std::pow(10, 4);
    }
    else if ((N/std::pow(10, 7)) < 10){
        N = N/std::pow(10, 5);
        N *= std::pow(10, 5);
    }
    else if ((N/std::pow(10, 8)) < 10){
        N = N/std::pow(10, 6);
        N *= std::pow(10, 6);
    }
    std::cout << N;
}

int main(){
    ABC304_task_B();
    return 0;
}
