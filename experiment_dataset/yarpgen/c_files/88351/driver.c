#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26113;
unsigned int var_5 = 2900388486U;
long long int var_7 = -8478366545254989709LL;
unsigned char var_10 = (unsigned char)92;
unsigned short var_11 = (unsigned short)30686;
unsigned long long int var_13 = 14645975497087758765ULL;
short var_14 = (short)-1306;
int zero = 0;
int var_16 = 1912280899;
short var_17 = (short)-29863;
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
