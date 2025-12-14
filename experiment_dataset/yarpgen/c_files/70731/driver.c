#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2849968426U;
signed char var_4 = (signed char)25;
unsigned long long int var_11 = 1647003552668061842ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1065902480U;
short var_17 = (short)21019;
signed char var_18 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
