#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
long long int var_2 = 6147573443821992977LL;
unsigned int var_5 = 2501017102U;
int zero = 0;
unsigned char var_14 = (unsigned char)32;
long long int var_15 = 8892307482039010640LL;
void init() {
}

void checksum() {
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
