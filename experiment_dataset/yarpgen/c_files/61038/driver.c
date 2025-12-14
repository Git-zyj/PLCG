#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 11245575345347751840ULL;
unsigned short var_7 = (unsigned short)57336;
unsigned long long int var_10 = 174302455085916699ULL;
int zero = 0;
unsigned long long int var_14 = 11998741017455910071ULL;
short var_15 = (short)29276;
void init() {
}

void checksum() {
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
