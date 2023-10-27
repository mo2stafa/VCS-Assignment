#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    return sum;
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Sum: " << getSum(numbers) << endl;
    return 0;
}
