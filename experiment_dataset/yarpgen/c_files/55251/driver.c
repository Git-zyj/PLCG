#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 2014787914937353120LL;
unsigned long long int var_6 = 4135230851799411622ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)16109;
int zero = 0;
unsigned long long int var_20 = 6663840607486000404ULL;
unsigned short var_21 = (unsigned short)27404;
short var_22 = (short)20271;
signed char var_23 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
