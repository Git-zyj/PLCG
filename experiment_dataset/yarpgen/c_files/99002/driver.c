#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16726592702821673975ULL;
int var_3 = 1451106724;
signed char var_4 = (signed char)15;
long long int var_5 = -8143233875681175806LL;
unsigned int var_6 = 2708467162U;
signed char var_7 = (signed char)5;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20117;
_Bool var_11 = (_Bool)0;
short var_13 = (short)14394;
int zero = 0;
unsigned int var_14 = 1032837971U;
unsigned short var_15 = (unsigned short)7191;
unsigned int var_16 = 1726783172U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
