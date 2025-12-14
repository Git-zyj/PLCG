#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27874;
unsigned short var_2 = (unsigned short)53875;
short var_6 = (short)31460;
unsigned long long int var_7 = 13285426607881767144ULL;
long long int var_10 = -6386651302269461587LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
