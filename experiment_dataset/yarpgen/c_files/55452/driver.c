#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 826487024;
signed char var_2 = (signed char)-43;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_13 = (short)-6582;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)14;
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
