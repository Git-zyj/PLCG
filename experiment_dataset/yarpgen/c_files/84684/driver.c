#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17990905948964351658ULL;
int var_6 = 1397378104;
unsigned int var_9 = 408760006U;
unsigned char var_16 = (unsigned char)109;
int zero = 0;
unsigned long long int var_20 = 5058147007053977119ULL;
unsigned char var_21 = (unsigned char)135;
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
