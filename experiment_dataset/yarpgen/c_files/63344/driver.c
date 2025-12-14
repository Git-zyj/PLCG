#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56521;
unsigned short var_3 = (unsigned short)51436;
unsigned short var_6 = (unsigned short)20081;
unsigned short var_7 = (unsigned short)53658;
unsigned short var_9 = (unsigned short)25750;
unsigned short var_11 = (unsigned short)64727;
unsigned short var_12 = (unsigned short)19214;
unsigned short var_14 = (unsigned short)42497;
unsigned short var_16 = (unsigned short)22259;
int zero = 0;
unsigned short var_17 = (unsigned short)1453;
unsigned short var_18 = (unsigned short)9;
unsigned short var_19 = (unsigned short)8335;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
