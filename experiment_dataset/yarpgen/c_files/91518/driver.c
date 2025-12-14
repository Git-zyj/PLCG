#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-11;
unsigned short var_12 = (unsigned short)35965;
signed char var_15 = (signed char)75;
signed char var_16 = (signed char)29;
int zero = 0;
short var_18 = (short)-31036;
unsigned short var_19 = (unsigned short)42026;
long long int var_20 = -8704913211392137174LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
