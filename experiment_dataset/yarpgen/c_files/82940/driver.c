#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7533;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)198;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)37633;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
