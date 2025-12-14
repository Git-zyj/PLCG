#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29300;
unsigned char var_6 = (unsigned char)195;
unsigned long long int var_7 = 2045054691453248606ULL;
int zero = 0;
short var_12 = (short)-25326;
unsigned long long int var_13 = 6773050247925654500ULL;
unsigned int var_14 = 3217759533U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
