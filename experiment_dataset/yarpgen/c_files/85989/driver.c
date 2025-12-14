#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7546796629529224484ULL;
short var_6 = (short)-32101;
unsigned char var_14 = (unsigned char)208;
unsigned long long int var_18 = 13512680529547895071ULL;
int zero = 0;
int var_20 = 177875561;
unsigned int var_21 = 346606717U;
unsigned long long int var_22 = 13104137874532478245ULL;
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
