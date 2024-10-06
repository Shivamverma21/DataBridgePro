#ifndef DATACONVERTER_H
#define DATACONVERTER_H

#include <cstdint>
#include <string>
#include <vector>

class DataConverter {
public:
    std::string binaryToJson(const std::vector<uint8_t>& binaryData);
};

#endif //DATACONVERTER_H
