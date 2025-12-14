#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_6 = (short)-20171;
long long int var_9 = -2339460839507842287LL;
unsigned int var_10 = 771335079U;
int var_12 = -1436938791;
int zero = 0;
unsigned char var_16 = (unsigned char)12;
long long int var_17 = -7627474503663385322LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
