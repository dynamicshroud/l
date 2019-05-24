// l - list files in directory

#include <iostream>
#include <experimental/filesystem>
#include <vector>
#include <cstring>
#include <string>
namespace fs = std::experimental::filesystem;

int main(int argc, char** argv){
    std::vector<std::string> files;
    
    if(argc < 2){
        for(auto p: fs::directory_iterator(fs::current_path())){
            files.push_back(p.path().filename().string());
        }
        
        for(auto v: files)
            std::cout << v << std::endl;
    } else {
        if(argc >= 3){
            std::cout << "Usage: l <directory>" << std::endl;
            return 1;
        }
        for(auto x: fs::directory_iterator(fs::path(std::string(argv[1])))){
            files.push_back(x.path().filename().string());
        }
        for(auto v: files)
            std::cout << v << std::endl;
    }
    
        
    return 0;
}