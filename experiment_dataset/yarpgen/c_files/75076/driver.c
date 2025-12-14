#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7509;
unsigned int var_1 = 3260633803U;
short var_2 = (short)-23458;
signed char var_5 = (signed char)37;
long long int var_6 = 6110673850293616104LL;
signed char var_7 = (signed char)20;
short var_9 = (short)31650;
signed char var_14 = (signed char)-87;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)14277;
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
