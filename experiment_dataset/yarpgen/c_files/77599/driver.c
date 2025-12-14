#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6378;
short var_3 = (short)-18882;
short var_5 = (short)14541;
int var_6 = 1664664003;
_Bool var_7 = (_Bool)1;
int var_8 = 1189726150;
short var_9 = (short)-25372;
short var_10 = (short)6023;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
unsigned short var_13 = (unsigned short)1291;
unsigned short var_14 = (unsigned short)20213;
short var_15 = (short)-7289;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
