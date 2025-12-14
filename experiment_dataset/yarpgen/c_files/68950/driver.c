#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 338118051U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)150;
short var_11 = (short)2111;
unsigned int var_12 = 773281706U;
int zero = 0;
unsigned short var_15 = (unsigned short)1220;
unsigned short var_16 = (unsigned short)37896;
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
