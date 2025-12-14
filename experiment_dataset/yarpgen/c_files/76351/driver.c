#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-4456;
long long int var_10 = -3164025716595297475LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-119;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7415468242099723369LL;
long long int var_18 = 6813968193319988673LL;
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
