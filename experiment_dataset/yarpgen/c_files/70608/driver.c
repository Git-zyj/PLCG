#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1896848793;
_Bool var_6 = (_Bool)1;
int var_7 = -1714105748;
short var_8 = (short)22723;
short var_10 = (short)-5310;
unsigned int var_12 = 1034480350U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-45;
unsigned char var_16 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
