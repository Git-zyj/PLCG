#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4505;
_Bool var_1 = (_Bool)1;
short var_3 = (short)9947;
signed char var_5 = (signed char)13;
int zero = 0;
signed char var_11 = (signed char)-60;
short var_12 = (short)-23867;
signed char var_13 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
