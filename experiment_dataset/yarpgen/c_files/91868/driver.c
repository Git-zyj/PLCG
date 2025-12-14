#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)1880;
unsigned char var_9 = (unsigned char)234;
unsigned char var_10 = (unsigned char)69;
int zero = 0;
unsigned int var_15 = 1697953300U;
unsigned int var_16 = 1425014669U;
int var_17 = -202129895;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
