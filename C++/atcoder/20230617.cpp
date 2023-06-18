#include <bits/stdc++.h>


void ABC288_task_A(){
    int N = 0;
    std::vector<int> AB;

    std::cin >> N;
    for (int i = 0; i < N; i++){
        int j, l = 0;

        std::cin >> j >> l;
        AB.push_back(j+l);
    }

    std::for_each(AB.begin(), AB.end(), [ &AB ](const auto& x){
            std::cout << x;
            if ( &x != &AB.back()){
                std::cout << std::endl;
            }
        });
}

void ABC288_task_B(){
    int N, K = 0;
    std::vector<std::string> S;

    std::cin >> N >> K;

    for (int i = 0; i < N; i++){
        std::string s;
        std::cin >> s;
        S.push_back(s);
    }

    std::vector<std::string> higher_ranker;
    for (int i = 0; i < K; i++){
        higher_ranker.push_back(S[i]);
    }
    
    for ( int l = 0; l < N; l++ ){
        for ( int i = 0; i < higher_ranker.size()-1; i++ ){
            size_t less_len = 0;
            (higher_ranker[i+1].size() > higher_ranker[i].size()) ? less_len = higher_ranker[i].size() : less_len = higher_ranker[i+1].size();
            

            for (int j = 0; j < less_len; j++){
                if ( static_cast<int>(higher_ranker[i][j]) > static_cast<int>(higher_ranker[i+1][j])){
                    std::string s;
                    s = higher_ranker[i];
                    higher_ranker[i] = higher_ranker[i+1];
                    higher_ranker[i+1] = s;
                    break;
               }
                
                if (j == less_len-1 && 
                        static_cast<int>(higher_ranker[i][j]) == static_cast<int>(higher_ranker[i+1][j])){
                    if (higher_ranker[i].size() > higher_ranker[i+1].size()){
                        std::string s;
                        s = higher_ranker[i];
                        higher_ranker[i] = higher_ranker[i+1];
                        higher_ranker[i+1] = s;
                        break;
                    }
                }
            }
        }
    }

    // output
    for (int i = 0; i < K; i++){
        if (i == K-1){
            std::cout << higher_ranker[i];
            return;
        }
        std::cout << higher_ranker[i] << std::endl;
    }
}


int main(){
    ABC288_task_B();
    return 0;
}
