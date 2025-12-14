#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
int var_2 = 1522671568;
unsigned long long int var_5 = 5063117316171280745ULL;
unsigned char var_8 = (unsigned char)7;
int zero = 0;
int var_11 = 613191585;
int var_12 = -1296961814;
unsigned char var_13 = (unsigned char)55;
_Bool var_14 = (_Bool)1;
short var_15 = (short)28819;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
