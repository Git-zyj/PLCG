#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)103;
long long int var_9 = -2450073460241824122LL;
int zero = 0;
short var_10 = (short)8549;
short var_11 = (short)28815;
unsigned long long int var_12 = 3561739511169240420ULL;
unsigned short var_13 = (unsigned short)4750;
signed char var_14 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
