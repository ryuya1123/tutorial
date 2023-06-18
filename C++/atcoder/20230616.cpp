#include <bits/stdc++.h>


void ABC289_task_B(){
    int N, M = 0;
    std::vector<int> a;

    std::cin >> N >> M;
    for ( int i = 0; i < M; i++ ){
        int index = 0;
        std::cin >> index;
        a.push_back(index);
    }

    int count = 0;
    std::vector<int> result_index;
    std::vector<std::vector<int>> result;

    if ( M == 0 ){
        int index_count = 0;
        for ( int i = 0; i < N; i++ ){
            if ( i == N-1 ){
                std::cout << i+1;
            }
            else{
                std::cout << i+1 << ' ';
            }
        }
        return;
    }
    for ( int i = 0; i < N; i++ ){
        if ( (i+1) == a[count]){
            result_index.push_back(i+1);
            count++;
        }
        else{
            result_index.push_back(i+1);
            std::sort(result_index.begin(), result_index.end(), std::greater<int>());
            result.push_back(result_index);
            result_index.clear();
        }
    }

    int index_count = 0;
    for ( int i = 0; i < result.size(); i++ ){
        std::for_each(result[i].begin(), result[i].end(), [i, &index_count, result](int j){
            if (i == result.size()-1){
                if (index_count == result[i].size()-1 ){
                std::cout << j;
                }
                else{
                    std::cout << j << ' ';
                    index_count++;
                }
            }
            else{
                std::cout << j << ' ';
            }
        });
    }
}

int main(){
    ABC289_task_B();
    return 0;
}
