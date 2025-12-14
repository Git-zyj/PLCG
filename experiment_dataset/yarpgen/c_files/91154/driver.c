#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2777540417U;
unsigned char var_2 = (unsigned char)85;
unsigned short var_4 = (unsigned short)37084;
unsigned short var_8 = (unsigned short)17491;
unsigned int var_9 = 769595917U;
unsigned int var_10 = 2968498576U;
int var_11 = -1965000218;
unsigned short var_14 = (unsigned short)43551;
int var_15 = -1933710718;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)250;
int var_18 = 1183692826;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
