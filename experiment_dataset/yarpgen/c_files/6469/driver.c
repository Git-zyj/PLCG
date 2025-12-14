#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)20483;
unsigned int var_11 = 2173209739U;
signed char var_13 = (signed char)-67;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5245088268170391146LL;
unsigned short var_17 = (unsigned short)12989;
unsigned short var_19 = (unsigned short)8450;
int zero = 0;
unsigned int var_20 = 3699185159U;
long long int var_21 = -2612277336140572319LL;
int var_22 = 1932970080;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
