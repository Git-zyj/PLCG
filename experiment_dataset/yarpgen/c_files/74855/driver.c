#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1602;
unsigned char var_5 = (unsigned char)198;
short var_8 = (short)-14910;
unsigned long long int var_11 = 18225525516152587760ULL;
unsigned long long int var_13 = 14958731080867740261ULL;
int zero = 0;
signed char var_16 = (signed char)116;
signed char var_17 = (signed char)97;
void init() {
}

void checksum() {
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
