#include <bits/stdc++.h>

int A_Task() {
    int N = 0;
    std::string S;
    std::string T;

    std::cin >> N >> S >> T;
    bool result = true;

    for(int i=0; i < N; i++){
        if (!result) break;
        if( S[i] == T[i] ) {
            result=true;
            continue;
        }

        if( S[i] == '0' ){
            if( T[i] == 'o'){
                result=true;
                continue;
            }
        }

        if ( S[i] == '1'){
            if( T[i] == 'l'){
                result = true;
                continue;
            }
        }

        if( T[i] == '0' ){
            if( S[i] == 'o'){
                result=true;
                continue;
            }
        }

        if ( T[i] == '1'){
            if( S[i] == 'l'){
                result = true;
                continue;
            }
        }
        result = false;
    }
    if(result){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}

void B_task(){
    int N, M=0;
    std::vector<std::vector<int>> photos;

    std::vector<int> result;
    std::vector<std::vector<int>> result_all;


    std::cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int data;
            std::cin >> data;
            photos[i].push_back(data);
        }
    }



    for(int i=0; i<N; i++){
        result = photos[0];
        for(int j=0; j<M; j++){
            if(j==1){
                if(i==0){
                    result.erase(std::remove(result.begin(), result.end(), photos[j][i+1]), result.end());
                }
                else{
                    result.erase(std::remove(result.begin(), result.end(), photos[j][i-1]), result.end());
                    result.erase(std::remove(result.begin(), result.end(), photos[j][i+1]), result.end());
                }
            }
            else{
                auto it = std::find(photos[j].begin(), photos[j].end(), photos[j][i]);
                if(it != photos[j].end()){
                   if(std::distance(photos[j].begin(), it) == 0){
                        result.erase(std::remove(result.begin(), result.end(), photos[j][i+1]), result.end());
                   }
                   else{
                    result.erase(std::remove(result.begin(), result.end(), photos[j][i-1]), result.end());
                    result.erase(std::remove(result.begin(), result.end(), photos[j][i+1]), result.end());
                   }
                }
                else{
                    continue;
                }
            }
        }
        result_all.push_back(result);
    }
    int total_elements = 0;
    for (const auto& row : result_all) {
        total_elements += row.size();
    }
    std::cout << total_elements;
}

int main(){
    B_task();
    return 0;
}
