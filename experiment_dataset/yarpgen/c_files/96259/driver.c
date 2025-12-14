#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)3503;
int var_9 = -758720471;
signed char var_12 = (signed char)-120;
signed char var_13 = (signed char)-60;
long long int var_14 = -4258567782996091803LL;
int zero = 0;
int var_16 = 998905825;
short var_17 = (short)-31470;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
