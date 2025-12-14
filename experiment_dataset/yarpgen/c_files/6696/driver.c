#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6384145352685658985ULL;
unsigned long long int var_2 = 13950113484811224358ULL;
long long int var_5 = 3230626556471456547LL;
unsigned long long int var_6 = 1660076461695298997ULL;
long long int var_9 = 9019138810253077389LL;
short var_10 = (short)-17306;
signed char var_12 = (signed char)113;
unsigned int var_13 = 3730828319U;
int zero = 0;
unsigned short var_15 = (unsigned short)19197;
int var_16 = 742348042;
signed char var_17 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
