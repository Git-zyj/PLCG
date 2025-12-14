#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17169;
short var_3 = (short)-7120;
unsigned short var_7 = (unsigned short)63664;
_Bool var_8 = (_Bool)1;
short var_14 = (short)-5436;
int zero = 0;
short var_15 = (short)33;
unsigned short var_16 = (unsigned short)25143;
unsigned short var_17 = (unsigned short)10128;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
