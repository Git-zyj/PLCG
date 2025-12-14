#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44530;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)196;
_Bool var_13 = (_Bool)0;
int var_14 = -750761170;
unsigned long long int var_15 = 11881295637520868415ULL;
void init() {
}

void checksum() {
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
