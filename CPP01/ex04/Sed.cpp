#include "Sed.hpp"

Sed::Sed(std::string filename) : inFile(filename){
    this->outFile = this->inFile + ".replace";
}
Sed::~Sed ( void ) {

}

void  Sed::replace( std::string toFind, std::string replace) {
    std::ifstream   ifs(this->inFile);
    if (ifs.is_open()) {
        std::string content;
        if (std::getline(ifs, content, '\0')) {
            std::ofstream   ofs(this->outFile);
            size_t pos = content.find(toFind);
            while ( pos != std::string::npos ) {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind);
            }
            ofs << content;
            ofs.close();
        }
        else {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}