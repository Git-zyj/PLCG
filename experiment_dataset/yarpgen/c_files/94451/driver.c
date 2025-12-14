#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2470201353U;
int var_3 = 1357142073;
unsigned char var_6 = (unsigned char)200;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)94;
int zero = 0;
short var_16 = (short)32004;
int var_17 = 627506570;
void init() {
}

void checksum() {
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
