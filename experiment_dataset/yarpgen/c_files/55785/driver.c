#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -498330069;
unsigned char var_2 = (unsigned char)87;
int var_5 = 1820749739;
short var_9 = (short)12249;
int var_10 = 1732701716;
int var_14 = -620606817;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)234;
short var_20 = (short)1668;
short var_21 = (short)-48;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
