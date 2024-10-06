#include "../include/BinaryParser.h"
#include <cstdint>
#include <fstream>
#include <vector>

BinaryParser::BinaryParser(const std::string& filePath) : filePath(filePath) {}

std::vector<uint8_t> BinaryParser::parseBinary() {
    std::ifstream file(filePath, std::ios::binary);

    if (!file.is_open()) {
        throw std::runtime_error("Failed to open the file.");
    }

    std::vector<uint8_t> binaryData;
    std::vector<uint8_t> buffer(1024 * 1024);  // Read in 1 MB chunks
    while (file.read(reinterpret_cast<char*>(buffer.data()), buffer.size())) {
        binaryData.insert(binaryData.end(), buffer.begin(), buffer.begin() + file.gcount());
    }

    // Handle any remaining bytes
    if (file.gcount() > 0) {
        binaryData.insert(binaryData.end(), buffer.begin(), buffer.begin() + file.gcount());
    }

    return binaryData;
}
