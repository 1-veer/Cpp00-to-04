#include <iostream>

int main (int ac ,char **av) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    int j = 1 ;
    int i = 0;
    while(av[j])
    {
    while (av[j][i]) {
        if (av[j][i] == '"')
        i++;
        if (av[j][i] >= 'a' && av[j][i] <= 'z') {
            av[j][i] -= 32;
            }
        std::cout << av [j][i];
        i++;
    }
    i = 0;
    j++;
    }
    std::cout << std::endl;

    return 0;
}
