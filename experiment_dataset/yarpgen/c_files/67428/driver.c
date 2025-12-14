#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)16;
unsigned char var_8 = (unsigned char)100;
unsigned int var_10 = 1515815967U;
unsigned int var_12 = 2571605367U;
unsigned int var_13 = 2496422345U;
unsigned char var_14 = (unsigned char)45;
unsigned long long int var_16 = 17312933121028677076ULL;
short var_19 = (short)-20323;
int zero = 0;
signed char var_20 = (signed char)-98;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
