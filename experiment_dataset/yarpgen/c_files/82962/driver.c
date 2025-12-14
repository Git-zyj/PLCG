#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-122;
unsigned long long int var_11 = 18385115582146678868ULL;
long long int var_12 = 1184771880814433830LL;
unsigned short var_17 = (unsigned short)5442;
int zero = 0;
long long int var_20 = -8841366607539777427LL;
int var_21 = -1410969710;
unsigned long long int var_22 = 648041976647894212ULL;
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
