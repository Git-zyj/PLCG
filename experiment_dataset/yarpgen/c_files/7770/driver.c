#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)23;
unsigned char var_7 = (unsigned char)104;
long long int var_8 = -8229291231785879601LL;
int zero = 0;
long long int var_14 = 6961678303004298209LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-30687;
unsigned int var_17 = 208438349U;
_Bool var_18 = (_Bool)1;
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
