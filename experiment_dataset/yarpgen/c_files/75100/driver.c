#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -909720457;
unsigned int var_3 = 1328932918U;
int var_7 = 571994216;
unsigned long long int var_13 = 10392637663951530170ULL;
unsigned short var_14 = (unsigned short)4010;
int zero = 0;
unsigned short var_15 = (unsigned short)59806;
unsigned int var_16 = 594008285U;
void init() {
}

void checksum() {
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
