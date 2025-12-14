#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2873967530836736064LL;
int var_4 = 109506214;
unsigned long long int var_7 = 1938360130192274779ULL;
unsigned char var_9 = (unsigned char)194;
signed char var_12 = (signed char)119;
short var_16 = (short)25290;
long long int var_17 = 8467972619616893079LL;
unsigned int var_19 = 1691711613U;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
unsigned char var_21 = (unsigned char)198;
unsigned char var_22 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
