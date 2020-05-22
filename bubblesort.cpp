/*
How this works is that through an array of random numbers, this will compare two numbers next to each other and then put the
largest number on the right. eventually, it will run through the set of numbers (n-1) times and then the list will get
relatively shorter with each iteration. O(n^2)
*/

#include <iostream>
#include <vector>

using namespace std;

class BubbleArray {
    private:
        vector<int> container;
        int len = 10;
    public:
        int getLength();
        void setValues(int val);
        void bubbleSort();
        void displayArray();
        void swap(int left, int right);
};

int BubbleArray::getLength(){
    return len;
}
void BubbleArray::setValues(int val){
    container.push_back(val);
}

void BubbleArray::swap(int left, int right){
    int temp = container[right];
    container[right] = container[left];
    container[left] = temp;
}

void BubbleArray::bubbleSort(){
    for (int i=0; i < len-1; i++){
        for (int j=0; j < len-1; j++){
                if (container[j] >  container[j+1]){
                    swap(j, j+1);
                }
        }
    }
}

void BubbleArray::displayArray(){
    for (int i=0; i < len; i++){
        cout << container[i] << ' ';
    }
}

int main(){

    BubbleArray vect;

    for (int i=0; i < vect.getLength(); i++){
        vect.setValues(rand()%100);
    }
    cout << "Unsorted" << endl;
    vect.displayArray();

    vect.bubbleSort();

    cout << endl << "Sorted" << endl;
    vect.displayArray();
    return 0;
}