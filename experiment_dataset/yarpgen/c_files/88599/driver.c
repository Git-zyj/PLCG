#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_8 = (short)27936;
short var_10 = (short)-2785;
_Bool var_15 = (_Bool)1;
int var_16 = 1811097494;
short var_17 = (short)25065;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -786309498;
unsigned long long int var_21 = 18390951786423693651ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
