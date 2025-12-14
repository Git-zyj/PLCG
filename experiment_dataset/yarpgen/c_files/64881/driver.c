#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20718;
signed char var_10 = (signed char)-60;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)62747;
short var_18 = (short)-15643;
signed char var_19 = (signed char)66;
short var_20 = (short)8711;
void init() {
}

void checksum() {
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
