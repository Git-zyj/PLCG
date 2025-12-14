#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_1 = (_Bool)1;
int var_2 = 1615501159;
_Bool var_4 = (_Bool)0;
int var_5 = 630923602;
unsigned int var_6 = 150849402U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)0;
signed char var_10 = (signed char)-7;
int zero = 0;
int var_11 = 1571162779;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
