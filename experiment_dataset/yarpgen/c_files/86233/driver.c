#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2052092927U;
unsigned long long int var_1 = 6259708074146392354ULL;
signed char var_6 = (signed char)90;
int var_9 = 426685988;
short var_10 = (short)-8807;
short var_11 = (short)6717;
int var_13 = 1497869254;
int var_14 = -1549045256;
short var_15 = (short)29351;
unsigned int var_18 = 1672856888U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-28682;
unsigned long long int var_21 = 12076640363288860160ULL;
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
