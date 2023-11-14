float problemSolution2(float i, float j, float k) {
    float result;
#include <iostream>
    using namespace std;

    float problemSolution2(float i, float j, float k) {
        float result = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
        return result;
    }

    int main() {
        float price1, price2, price3;

        cout << "Enter the prices of three products: ";
        cin >> price1 >> price2 >> price3;

        float maxPrice = problemSolution2(price1, price2, price3);

        cout << "The maximum number is " << maxPrice << endl;

        return 0;
    }

    return result;
}