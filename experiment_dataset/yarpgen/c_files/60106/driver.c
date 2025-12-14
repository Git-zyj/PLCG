#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
short var_2 = (short)-11147;
unsigned int var_5 = 307838706U;
short var_11 = (short)-3139;
unsigned int var_17 = 1534723356U;
int zero = 0;
signed char var_20 = (signed char)33;
long long int var_21 = -4746893996004650656LL;
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
