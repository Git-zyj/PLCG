#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)67;
short var_6 = (short)-15496;
long long int var_8 = 4095416857165297338LL;
short var_9 = (short)15006;
int zero = 0;
int var_10 = -1171432436;
signed char var_11 = (signed char)-60;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
