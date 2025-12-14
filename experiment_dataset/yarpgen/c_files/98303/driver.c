#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4692422112951613663ULL;
signed char var_2 = (signed char)49;
int var_9 = 4895227;
unsigned char var_12 = (unsigned char)251;
long long int var_18 = -2126895350468357261LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59965;
short var_21 = (short)-252;
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
