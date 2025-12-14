#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)37;
unsigned int var_2 = 2050862943U;
unsigned short var_4 = (unsigned short)6418;
short var_5 = (short)24613;
unsigned int var_6 = 2181602370U;
unsigned int var_7 = 531377507U;
int zero = 0;
int var_10 = 1501417570;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
