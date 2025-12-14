#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
short var_2 = (short)-18314;
_Bool var_5 = (_Bool)1;
long long int var_9 = -819053006532194678LL;
_Bool var_10 = (_Bool)1;
long long int var_12 = 5416152361754091555LL;
int zero = 0;
unsigned int var_14 = 1560859075U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 823107781U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
