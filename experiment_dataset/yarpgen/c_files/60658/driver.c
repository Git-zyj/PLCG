#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 3769719563659131315ULL;
unsigned int var_3 = 1676273893U;
int var_9 = -1591212392;
signed char var_15 = (signed char)-25;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)102;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
