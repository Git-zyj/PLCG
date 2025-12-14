#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -39787835;
unsigned short var_12 = (unsigned short)49986;
short var_14 = (short)-26709;
short var_16 = (short)-18243;
short var_17 = (short)8017;
int zero = 0;
unsigned short var_20 = (unsigned short)16871;
signed char var_21 = (signed char)8;
unsigned short var_22 = (unsigned short)17710;
void init() {
}

void checksum() {
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
