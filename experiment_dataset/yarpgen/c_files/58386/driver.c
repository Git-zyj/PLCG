#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35511;
unsigned short var_1 = (unsigned short)23992;
unsigned char var_6 = (unsigned char)38;
int zero = 0;
unsigned long long int var_16 = 12421100074813726840ULL;
unsigned char var_17 = (unsigned char)231;
unsigned long long int var_18 = 11429943190407794331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
