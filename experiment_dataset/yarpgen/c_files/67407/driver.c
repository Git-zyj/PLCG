#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2528873178U;
short var_7 = (short)-31404;
unsigned long long int var_8 = 15249501139900696409ULL;
unsigned int var_9 = 761679837U;
unsigned int var_10 = 4065095083U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-117;
long long int var_17 = 4978014531653251325LL;
signed char var_18 = (signed char)-59;
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
