#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6913;
long long int var_11 = -7717844296725971188LL;
int var_16 = -1551123073;
int zero = 0;
int var_17 = -1628158059;
long long int var_18 = -7469328117044899674LL;
signed char var_19 = (signed char)(-127 - 1);
unsigned int var_20 = 1963631736U;
unsigned long long int var_21 = 967631403083691294ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
