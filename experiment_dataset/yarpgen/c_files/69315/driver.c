#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)44;
unsigned char var_7 = (unsigned char)47;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-111;
unsigned short var_12 = (unsigned short)43320;
int zero = 0;
signed char var_15 = (signed char)-94;
unsigned short var_16 = (unsigned short)21372;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)48676;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
