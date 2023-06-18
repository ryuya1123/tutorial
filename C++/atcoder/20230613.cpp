#include <bits/stdc++.h>


void ABC291_task_A(){
    std::string S;
    std::cin >> S;

    for(int i = 0; i < S.size(); i++){
        if ( 'A' <= S[i] && 'Z' >= S[i]){
            std::cout << i+1;
            break;
        }
    }

    // other answer
    /*for(int i = 0; i < S.size(); i++){
        if ( isupper(S[i]) ){
            std::cout << i+1;
            break;
        }
    }
    */

}

int main(){
    ABC291_task_A();
    return 0;
}
