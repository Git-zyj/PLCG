#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
long long int var_4 = 2268133862185568391LL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)6278;
unsigned int var_8 = 2652677036U;
unsigned int var_9 = 3657245258U;
int zero = 0;
int var_10 = -845904679;
short var_11 = (short)-4948;
unsigned long long int var_12 = 16971481613269056733ULL;
unsigned char var_13 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
