#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
int var_5 = -357767700;
unsigned short var_7 = (unsigned short)11902;
signed char var_9 = (signed char)69;
int zero = 0;
short var_13 = (short)-29230;
unsigned int var_14 = 3945456712U;
unsigned long long int var_15 = 9790021462668529843ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
