#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
signed char var_4 = (signed char)-84;
long long int var_7 = -5800325447589510854LL;
long long int var_11 = -5721158928875674445LL;
int zero = 0;
unsigned int var_14 = 2250643807U;
unsigned char var_15 = (unsigned char)71;
signed char var_16 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
