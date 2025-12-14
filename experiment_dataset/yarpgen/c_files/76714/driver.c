#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned long long int var_1 = 384088469553766970ULL;
signed char var_4 = (signed char)15;
unsigned long long int var_5 = 17626167623523878742ULL;
int var_10 = -1071943179;
signed char var_11 = (signed char)-95;
int zero = 0;
unsigned short var_12 = (unsigned short)1707;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14774250686663138080ULL;
unsigned long long int var_15 = 3969634339422867559ULL;
unsigned short var_16 = (unsigned short)1677;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
