#include <iostream>
#include <vector>

using namespace std;

class arrayFunc{
    private:
        vector<int> container;
        int len;
    public:
        void setLength(int val);
        void setValues();
        void displayArray();
};

void arrayFunc::setLength(int val){
    len = val;
}

void arrayFunc::setValues(){
    for (int i=0; i < len; i++){
        container.push_back(rand()%100);
    }
}

void arrayFunc::displayArray(){
    for (int i=0; i<len; i++){
        cout << container[i] << ' ';
    }
}

int main(){
    return 1;
}