#ifndef BINARYPARSER_H
#define BINARYPARSER_H

#include <cstdint>
#include <vector>
#include <string>

class BinaryParser {
public:
    explicit BinaryParser(const std::string& filePath);
    std::vector<uint8_t> parseBinary();

private:
    std::string filePath;
};

#endif //BINARYPARSER_H
