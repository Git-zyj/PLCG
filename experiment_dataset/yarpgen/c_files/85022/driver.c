#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19771;
long long int var_2 = -6746550555227348454LL;
long long int var_5 = -4691561545122624425LL;
int var_10 = 2126799063;
int zero = 0;
unsigned short var_11 = (unsigned short)8774;
unsigned char var_12 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
