#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1409311235;
unsigned short var_3 = (unsigned short)58962;
signed char var_5 = (signed char)65;
long long int var_6 = -884766993394988077LL;
unsigned short var_8 = (unsigned short)40045;
signed char var_9 = (signed char)30;
unsigned long long int var_13 = 12860166729407070471ULL;
unsigned short var_15 = (unsigned short)5503;
int zero = 0;
int var_18 = 729588923;
unsigned long long int var_19 = 15869567517719043733ULL;
unsigned char var_20 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
