#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 462158521U;
unsigned int var_5 = 3581735149U;
unsigned short var_6 = (unsigned short)59452;
unsigned long long int var_8 = 433870176089482856ULL;
unsigned char var_10 = (unsigned char)127;
int zero = 0;
short var_12 = (short)29445;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6552420739036284712LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
