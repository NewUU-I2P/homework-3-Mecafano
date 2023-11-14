void problemSolution1(float consumed_water) {
    float cost;
#include <iostream>
    using namespace std;

    float problemSolution1(float consumed_water) {
        const float fixed_amount = 13.0;
        const float rate_1 = 0.4;
        const float rate_2 = 0.12;
        const float rate_3 = 1.4;
        const float additional_rate = 1.5;

        float cost = fixed_amount;

        if (consumed_water <= 30) {
            cost += consumed_water * rate_1;
        } else if (consumed_water <= 50) {
            cost += 30 * rate_1 + (consumed_water - 30) * rate_2;
        } else if (consumed_water <= 60) {
            cost += 30 * rate_1 + 20 * rate_2 + (consumed_water - 50) * rate_3;
        } else {
            cost += 30 * rate_1 + 20 * rate_2 + 10 * rate_3 + (consumed_water - 60) * additional_rate;
        }

        return cost;
    }

    int main() {
        float consumed_water;

        cout << "Enter the water consumption in cubic meters: ";
        cin >> consumed_water;

        float total_cost = problemSolution1(consumed_water);

        cout << "Total cost: " << total_cost << endl;

        return 0;
    }


    return cost;
}
