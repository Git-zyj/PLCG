#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-25;
unsigned int var_2 = 3280714784U;
signed char var_5 = (signed char)-109;
unsigned long long int var_6 = 15124542683371276943ULL;
signed char var_10 = (signed char)-70;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)112;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1300988446;
signed char var_16 = (signed char)23;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
