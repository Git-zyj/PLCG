#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 215950119U;
unsigned char var_1 = (unsigned char)88;
unsigned int var_4 = 3778901750U;
unsigned char var_6 = (unsigned char)225;
long long int var_7 = -5216037558106386460LL;
int zero = 0;
unsigned int var_12 = 3533644694U;
unsigned int var_13 = 3715879463U;
unsigned short var_14 = (unsigned short)4780;
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
