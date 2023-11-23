#include <iostream>
#include <json/json.h>
#include <memory>
#include<sstream>
#include<string>
int main() {
    Json::Value root;
    root["name"] = "John";
    root["age"] = 25;
    root["city"] = "New York";

    Json::StreamWriterBuilder writer;
    std::ostringstream oss;

    std::unique_ptr<Json::StreamWriter> jsonWriter(writer.newStreamWriter());
    jsonWriter->write(root, &oss);
    
    std::string jsonString = oss.str();
    
    std::cout << jsonString.c_str() << std::endl;

    return 0;
}