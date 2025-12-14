#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 684641999025947765ULL;
unsigned int var_12 = 2916856209U;
int var_16 = 1558808523;
short var_17 = (short)-31086;
int zero = 0;
short var_20 = (short)29556;
signed char var_21 = (signed char)58;
short var_22 = (short)-5737;
_Bool var_23 = (_Bool)0;
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
