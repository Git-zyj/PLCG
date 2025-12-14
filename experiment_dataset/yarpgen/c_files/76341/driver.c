#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53403;
unsigned short var_1 = (unsigned short)32383;
unsigned short var_4 = (unsigned short)24185;
short var_5 = (short)10741;
unsigned char var_6 = (unsigned char)134;
unsigned int var_12 = 688345194U;
unsigned short var_14 = (unsigned short)28387;
int var_15 = 175644265;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-21;
int zero = 0;
unsigned short var_19 = (unsigned short)51015;
unsigned short var_20 = (unsigned short)22872;
unsigned char var_21 = (unsigned char)93;
unsigned short var_22 = (unsigned short)22829;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
