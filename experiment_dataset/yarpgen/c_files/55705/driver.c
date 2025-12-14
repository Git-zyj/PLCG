#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)50859;
unsigned short var_10 = (unsigned short)51393;
signed char var_12 = (signed char)3;
short var_14 = (short)-21285;
unsigned char var_15 = (unsigned char)127;
long long int var_16 = 7931499247184799317LL;
int zero = 0;
short var_17 = (short)15154;
_Bool var_18 = (_Bool)0;
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
