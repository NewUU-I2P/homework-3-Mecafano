#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress){
    if (macAddress[1]=='F'){
        return "Broadcast";

    }else if (macAddress[1]=='8'){
        return "Unicast";
    }else if (macAddress[1]=='3'){
        return "Multicast";
    }
    return "";

}
