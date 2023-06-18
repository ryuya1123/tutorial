#include <bits/stdc++.h>

void output(int number){
    std::cout << number << " ";
}

void last_output(int number){
    std::cout << number;
}


int main(){
    int N = 0;
    std::vector<int> A;

    std::cin >> N;
    for (int i=0; i < N; i++){
        int N_number=0;
        std::cin >> N_number;
        A.push_back(N_number);
    }
    size_t number_of_times = A.size();
    for (size_t i = 0; i < number_of_times-1; i++){
        if((A[i]-A[i+1])==1 || (A[i+1]-A[i]==1)){
            continue;
        }
        else if(A[i] > A[i+1]){
            int n=A[i]-A[i+1];
            for (int j=0; j<n-1; j++){
                A.insert(A.begin()+i+j+1, A[i+j]-1);
            }
            number_of_times += n-1;
        }
        else if(A[i] < A[i+1]){
            int n=A[i+1]-A[i];
            for(int j=0; j<n-1; j++){
                A.insert(A.begin()+i+j+1, A[i+j]+1);
            }
            number_of_times += n-1;
        }
    }

    size_t count = 0;

    std::for_each(A.begin(), A.end(), [&](int i){
            if (count == A.size()-1){
                last_output(i);
            }
            else{
                output(i);
            }
            count++;
    });
}
