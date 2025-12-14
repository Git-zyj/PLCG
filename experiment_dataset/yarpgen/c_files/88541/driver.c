#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)1506;
_Bool var_8 = (_Bool)0;
int var_15 = -553408540;
signed char var_16 = (signed char)102;
short var_17 = (short)-15850;
signed char var_18 = (signed char)-115;
int zero = 0;
unsigned long long int var_19 = 799860149282438205ULL;
long long int var_20 = 299011032895718382LL;
_Bool var_21 = (_Bool)1;
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
