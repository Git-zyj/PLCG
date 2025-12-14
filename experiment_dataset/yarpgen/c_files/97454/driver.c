#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)53;
unsigned int var_2 = 3172061256U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-17;
long long int var_6 = 1881878782069240645LL;
signed char var_7 = (signed char)-96;
long long int var_8 = 6191358503958841943LL;
int var_9 = -549243477;
int zero = 0;
unsigned int var_10 = 895339620U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)6943;
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
