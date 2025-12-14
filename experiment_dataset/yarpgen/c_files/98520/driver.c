#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1124514191U;
unsigned short var_1 = (unsigned short)8643;
unsigned int var_2 = 3938506729U;
unsigned short var_4 = (unsigned short)11578;
unsigned long long int var_6 = 10545756690860196399ULL;
unsigned int var_10 = 1474721252U;
int zero = 0;
unsigned short var_12 = (unsigned short)60846;
unsigned long long int var_13 = 10659013042773290458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
