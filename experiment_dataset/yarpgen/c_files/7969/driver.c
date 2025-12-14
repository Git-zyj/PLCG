#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-120;
unsigned int var_4 = 4038087083U;
unsigned int var_5 = 1474806317U;
unsigned short var_10 = (unsigned short)27007;
short var_15 = (short)-5509;
signed char var_17 = (signed char)-61;
int zero = 0;
short var_19 = (short)3548;
unsigned int var_20 = 1281201008U;
signed char var_21 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
