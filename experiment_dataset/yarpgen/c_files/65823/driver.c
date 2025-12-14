#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59686;
unsigned short var_4 = (unsigned short)7746;
unsigned char var_6 = (unsigned char)85;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 4098307960U;
int zero = 0;
unsigned char var_12 = (unsigned char)68;
unsigned long long int var_13 = 750320550081166243ULL;
unsigned long long int var_14 = 7555031409384862472ULL;
int var_15 = 122079473;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
