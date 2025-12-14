#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31885;
unsigned char var_7 = (unsigned char)50;
_Bool var_8 = (_Bool)1;
short var_12 = (short)20808;
int zero = 0;
short var_14 = (short)-13412;
unsigned int var_15 = 104340450U;
long long int var_16 = -6352035691591919243LL;
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
