#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10613614113484122482ULL;
unsigned char var_6 = (unsigned char)122;
unsigned int var_8 = 2594196838U;
unsigned long long int var_13 = 10347032723191857029ULL;
unsigned char var_14 = (unsigned char)92;
unsigned long long int var_17 = 4415032505413835747ULL;
int zero = 0;
signed char var_20 = (signed char)13;
long long int var_21 = 7769154453033844069LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
