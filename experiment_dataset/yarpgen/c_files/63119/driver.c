#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2749;
int var_3 = 14539923;
long long int var_8 = -389697118807292153LL;
unsigned int var_9 = 949885463U;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)52455;
unsigned short var_15 = (unsigned short)58460;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-5477;
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
