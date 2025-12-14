#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5384385186691813090ULL;
unsigned short var_1 = (unsigned short)59628;
unsigned char var_2 = (unsigned char)194;
int var_3 = 1426097737;
short var_6 = (short)7696;
short var_7 = (short)4212;
unsigned char var_9 = (unsigned char)73;
unsigned char var_12 = (unsigned char)99;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)14378;
unsigned short var_18 = (unsigned short)30669;
void init() {
}

void checksum() {
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
