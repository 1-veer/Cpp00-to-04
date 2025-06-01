#include <iostream>
#include <cctype>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    int j = 1;
    while (j < ac) {
        int i = 0;
        while (av[j][i]) {
            if (av[j][i] != '"') {
                std::cout << (char)std::toupper(av[j][i]);
            }
            i++;
        }
        j++;
    }

    std::cout << std::endl;
    return 0;
}
