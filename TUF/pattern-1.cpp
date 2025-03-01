    #include <iostream>
    using namespace std;

    void pattern_q5(int n){
        for (int i = 0; i<n; i++){
            for (int j = n; j>i; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    int main() {
        int n = 6;
        pattern_q5(n);
        return 0;
    }