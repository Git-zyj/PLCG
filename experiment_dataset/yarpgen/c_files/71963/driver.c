#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
short var_3 = (short)355;
short var_9 = (short)31057;
short var_12 = (short)30487;
long long int var_18 = 1597248654030098639LL;
int zero = 0;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)227;
short var_22 = (short)24482;
unsigned long long int var_23 = 16721953785817708699ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
