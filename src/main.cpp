#include "../include/BinaryParser.h"
#include "../include/DataConverter.h"
#include "../include/Logger.h"
#include <cstdint>
#include <iostream>

int main() {
    // Filepath to binary file
    std::string filePath = "../test/test_data.bin";

    Logger::log("Starting DataBridgePro");

    // Parse binary file
    BinaryParser binaryParser(filePath);
    std::vector<uint8_t> binaryData = binaryParser.parseBinary();
    Logger::log("Binary data parsed successfully.");

    // Convert binary data to JSON
    DataConverter converter;
    std::string jsonData = converter.binaryToJson(binaryData);
    Logger::log("Conversion to JSON completed.");

    // Output the JSON data
    std::cout << jsonData << std::endl;

    return 0;
}
