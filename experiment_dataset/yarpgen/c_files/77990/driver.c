#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2240635143U;
unsigned char var_5 = (unsigned char)63;
long long int var_6 = 5369773720830067397LL;
unsigned short var_7 = (unsigned short)44216;
long long int var_10 = -8672313886182987662LL;
unsigned int var_12 = 4157445344U;
int zero = 0;
unsigned long long int var_16 = 8834288460451525189ULL;
unsigned int var_17 = 2351093518U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
