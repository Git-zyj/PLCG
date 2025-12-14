#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8821281742725225013ULL;
unsigned long long int var_1 = 6272163229917462869ULL;
short var_2 = (short)-15244;
short var_7 = (short)-9219;
unsigned int var_9 = 1003060192U;
int var_10 = -1621673418;
unsigned long long int var_11 = 13243350125235763108ULL;
unsigned long long int var_14 = 12708509440845802431ULL;
short var_15 = (short)17144;
unsigned short var_17 = (unsigned short)22795;
int zero = 0;
unsigned short var_20 = (unsigned short)35910;
short var_21 = (short)16112;
short var_22 = (short)6792;
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
