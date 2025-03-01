    #include <iostream>
    using namespace std;

    void pattern_q2(int n){
        for(int i = 0; i<n;i++){
            for(int j = 0; j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }

    int main() {
        int n = 6;
        pattern_q2(n);
        return 0;
    }