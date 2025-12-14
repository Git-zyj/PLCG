#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -2191067062563004513LL;
unsigned long long int var_15 = 1591075311478459596ULL;
int zero = 0;
unsigned int var_19 = 1320921487U;
signed char var_20 = (signed char)11;
unsigned int var_21 = 3817971661U;
unsigned char var_22 = (unsigned char)135;
unsigned short var_23 = (unsigned short)38671;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
