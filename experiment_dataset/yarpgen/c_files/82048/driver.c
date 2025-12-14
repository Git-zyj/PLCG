#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)20;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7282146744080993921LL;
int var_11 = -1552334174;
int zero = 0;
signed char var_13 = (signed char)119;
unsigned long long int var_14 = 10810467418606841790ULL;
signed char var_15 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
