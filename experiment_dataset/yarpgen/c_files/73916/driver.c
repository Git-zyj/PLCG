#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 239305805U;
short var_5 = (short)23717;
short var_7 = (short)1079;
unsigned char var_9 = (unsigned char)121;
unsigned char var_10 = (unsigned char)133;
long long int var_11 = -9019128264931761931LL;
int zero = 0;
unsigned char var_12 = (unsigned char)97;
signed char var_13 = (signed char)1;
unsigned char var_14 = (unsigned char)96;
short var_15 = (short)-21429;
short var_16 = (short)26847;
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
