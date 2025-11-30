#include <iostream>
#include <string>
#include <fstream>

int replace (std::string& filename, const std::string& s1, const std::string& s2) 
{
    std::ifstream read(filename.c_str()); // cuz of old cpp
    if (!read)
    {
        std::cerr << filename << " could not be opened for reading!\n";
        return 1;
    }

    std::string old_content;
    std::string line;
    while (std::getline(read, line)) 
    {
        old_content += line + "\n"; 
    }
    read.close();

    std::string new_content;
    size_t pos = 0;

    while (pos < old_content.size()) {
        size_t found = old_content.find(s1, pos); // search for 1st occurrence of s1 from pos and return position where it is found
        
        if (found != std::string::npos) // invalid position aka not found 
        {
            new_content.append(old_content, pos, found - pos);
            new_content += s2; 
            pos = found + s1.size();
        }
        else
        {
            new_content.append(old_content, pos, old_content.size() - pos);
            break;
        }
    }
    std::ofstream new_file((filename + ".replace").c_str());
    if (!new_file)
    {
        std::cerr << "could not be opened for writing!\n";
        return 1;
    }
    new_file << new_content;
    return 0;
}

int main (int ac, char *av[])
{
    if (ac != 4) {
        std::cerr << "Usage: ./program <file> <s1> <s2>\n";
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (replace (filename, s1, s2))
        return 1;
    
    return 0;
}

