#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2038375672U;
unsigned char var_8 = (unsigned char)20;
signed char var_11 = (signed char)6;
unsigned short var_12 = (unsigned short)63092;
int zero = 0;
unsigned char var_13 = (unsigned char)35;
long long int var_14 = 4852214798998057742LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
