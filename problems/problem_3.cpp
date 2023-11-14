#include <string>

std::string problemSolution3(float height, char S) {
    if (S == 'M') {
        if (height < 1.70) {
            return "Short";
        } else if (height >= 1.70 && height < 1.85) {
            return "Normal";
        } else if (height >= 1.85) {
            return "Tall";
        }
    } else if (S == 'F') {
        if (height < 1.60) {
            return "Short";
        } else if (height >= 1.60 && height < 1.75) {
            return "Normal";
        } else if (height >= 1.75) {
            return "Tall";
        }


    }
}
