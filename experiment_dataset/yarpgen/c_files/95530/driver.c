#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5359178877701711635LL;
unsigned short var_12 = (unsigned short)12842;
unsigned long long int var_16 = 6819482993255957377ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2614507649U;
short var_20 = (short)13534;
signed char var_21 = (signed char)99;
unsigned long long int var_22 = 16273545824325124150ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
