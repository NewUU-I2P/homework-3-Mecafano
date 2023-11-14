#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
#include <iostream>
#include <string>
#include <sstream>

    using namespace std;

    string problemSolution4(const string &macAddress) {
        stringstream ss(macAddress);
        string octet;
        int firstOctet;

        // Read the first octet from the MAC address
        getline(ss, octet, ':');
        stringstream(octet) >> hex >> firstOctet;

        // Check the type of the MAC address based on the value of the first octet
        if (firstOctet % 2 == 0) {
            return "Unicast";
        } else if (firstOctet == 0xFF) {
            return "Broadcast";
        } else {
            return "Multicast";
        }
    }

    int main() {
        string macAddress;

        cout << "Enter the MAC address in x:x:x:x:x:x form: ";
        getline(cin, macAddress);

        string addressType = problemSolution4(macAddress);

        cout << "Output: " << addressType << endl;

        return 0;
    }

}
