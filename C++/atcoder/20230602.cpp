#include <bits/stdc++.h>

int main(){
    int N;
    std::string S;

    std::cin >> N >> S;

    int T_number = 0;
    int A_number = 0;

    for ( int i = 0; i < N; i++ ){
        if( S[i] == 'T'){
            T_number++;
        }
        else {
            A_number++;
        }
        if(N%2 == 0){
            if (T_number >= (N/2)){
                std::cout << 'T';
                return 0;
            }
            else if ( A_number >= (N/2)){
                std::cout << 'A';
                return 0;
            }
        }
    }
    if(T_number > A_number){
        std::cout << 'T';
    }
    else{
        std::cout << 'A';
    }

    return 0;
}
