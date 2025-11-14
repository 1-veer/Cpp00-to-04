#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char *av[])
{
    if (ac != 4) {
        std::cerr << "Usage: ./program <file> <s1> <s2>\n";
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream read(filename); // cuz of old cpp
    if (!read)
    {
        std::cerr << filename << " could not be opened for reading!\n";
        return 1;
    }
     std::string old_content;
    char c;
    while (read.get(c)) {
        old_content += c;
    }
    read.close();

    std::string new_content;

    for (size_t i = 0; i < old_content.size();)
    {
        int match = 0;
        if (old_content[i] == s1[0])
        {
            match = 1;
            if (i + s1.size() > old_content.size()) 
                match = 0;
            else
            {
                for(size_t j = 1; j < s1.size(); j++)
                {
                    if ((old_content[i+j] != s1[j]))
                    {
                        match = 0;
                        break;
                    }
                }
            }
        }
        if (match)
        {
            new_content += s2;
            i+=s1.size(); 
        }
        else 
        {
            new_content+= old_content[i];
            i++;
        }
    }
    

    std::ofstream new_file(filename + ".replace");
    new_file << new_content;
    return 0;
}

