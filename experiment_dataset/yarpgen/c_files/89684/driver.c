#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -215345356593297867LL;
long long int var_4 = 7664688296845068458LL;
signed char var_5 = (signed char)(-127 - 1);
short var_7 = (short)10896;
long long int var_8 = -8574572289399413833LL;
short var_11 = (short)-8633;
int var_12 = -1109245335;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)-3725;
short var_18 = (short)15390;
void init() {
}

void checksum() {
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
