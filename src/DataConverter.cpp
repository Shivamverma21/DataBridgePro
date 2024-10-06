#include "../include/DataConverter.h"
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

using namespace rapidjson;

std::string DataConverter::binaryToJson(const std::vector<uint8_t>& binaryData) {
    Document jsonDoc;
    jsonDoc.SetObject();

    auto& allocator = jsonDoc.GetAllocator();

    // For simplicity, let's assume each byte is a key-value in JSON
    for (size_t i = 0; i < binaryData.size(); ++i) {
        std::string key = "byte_" + std::to_string(i);
        jsonDoc.AddMember(Value().SetString(key.c_str(), allocator), Value().SetInt(binaryData[i]), allocator);
    }

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    jsonDoc.Accept(writer);

    return buffer.GetString();
}
