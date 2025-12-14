#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14874;
short var_2 = (short)-18485;
long long int var_3 = -5244512246626403520LL;
signed char var_7 = (signed char)71;
int var_9 = 1678234752;
long long int var_12 = -6139409861571359471LL;
unsigned short var_13 = (unsigned short)35715;
int zero = 0;
short var_14 = (short)-10716;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)205;
void init() {
}

void checksum() {
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
