#include <iostream>

int house[4];

int main() {
    int i = 0;
    int n = 0;

    std::cout << "Input of people who lives in this house: " << std::endl;
    std::cin >> n;
    while (i <= sizeof(house)/sizeof(house[0])) {
        int ni;
        std::cout << "Input the number of people on floor number " << i + 1 << ":" << std::endl;
        std::cin >> ni;
        house[i] = ni;
        i++;
    }
    float percent;
    int sum = 0;
    for(int i = 0; i < sizeof(house)/sizeof(house[0]); i++){
        sum+= house[i];
    }
    percent = (sum*100.f)/n;
    std::cout<< percent;
}
