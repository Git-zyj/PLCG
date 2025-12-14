#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1031327914;
short var_3 = (short)-5419;
int var_4 = 708459768;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)92;
int zero = 0;
unsigned short var_13 = (unsigned short)12888;
unsigned short var_14 = (unsigned short)22486;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
