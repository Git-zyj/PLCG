#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned char var_1 = (unsigned char)214;
unsigned char var_3 = (unsigned char)249;
unsigned char var_4 = (unsigned char)78;
long long int var_5 = -2077106427371080717LL;
unsigned char var_7 = (unsigned char)107;
unsigned char var_8 = (unsigned char)255;
signed char var_10 = (signed char)18;
unsigned long long int var_11 = 17360563690986852750ULL;
int zero = 0;
unsigned int var_12 = 3037356736U;
unsigned char var_13 = (unsigned char)57;
unsigned long long int var_14 = 18321281129789974246ULL;
unsigned char var_15 = (unsigned char)38;
short var_16 = (short)-17124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
