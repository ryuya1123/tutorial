#include <bits/stdc++.h>


void ABC293_task_A(){
    std::string S;
    std::cin >> S;

    for (int i = 0; i < (S.length() / 2); i++){
        char s;
        if(i == 0){
            s = S[i+1];
            S[i+1] = S[i];
            S[i] = s;
        }
        else{
            s = S[2*i+1];
            S[2*i+1] = S[2*i];
            S[2*i] = s;
        }
    }

    std::cout << S;
}

void ABC293_task_B(){
    int N = 0;
    std::vector<int> A;

    std::cin >> N;
    for ( int i = 0; i < N; i++ ){
        int a = 0;
        std::cin >> a;
        A.push_back(a);
    }
    
    for ( int i = 0; i < N; i++ ){
        if (A[i] == 0) continue;
        // bool call_Ai = false;
        // if( i != 0 ) call_Ai = ( *std::find(Ai.begin(), Ai.end(), A[i]) == A[i] );
        A[A[i]-1] = 0;
    }
    std::vector<int> result;
    for ( int i = 0; i < N; i++ ){
        if (A[i] != 0){
            result.push_back(i+1);
        }
    }
    
    std::sort(result.begin(), result.end());
    std::cout << result.size() << std::endl;

    auto last_element_it = --result.end();
    std::for_each(result.begin(), result.end(), [last_element_it](int i){
            if (i == *last_element_it){
                std::cout << i;
            }
            else{
                std::cout << i << ' ';
            }
    });


    // test code
    auto itEnd = std::remove(std::begin(A), std::end(A), 0);
    A.erase(itEnd, std::cend(A));

}

int main(){
    ABC293_task_B();
    return 0;
}

