#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 396657260;
_Bool var_2 = (_Bool)1;
long long int var_6 = 7190087308183031944LL;
signed char var_8 = (signed char)-35;
signed char var_13 = (signed char)120;
int zero = 0;
unsigned short var_14 = (unsigned short)53517;
unsigned char var_15 = (unsigned char)147;
signed char var_16 = (signed char)87;
unsigned int var_17 = 697536607U;
signed char var_18 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
