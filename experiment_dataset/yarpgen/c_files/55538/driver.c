#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8634896662662935137ULL;
_Bool var_7 = (_Bool)0;
short var_11 = (short)12795;
long long int var_12 = 8600387870024378246LL;
unsigned int var_13 = 36231298U;
long long int var_16 = 4570317372846839537LL;
signed char var_18 = (signed char)116;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
long long int var_21 = 6998101481590737993LL;
short var_22 = (short)4378;
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
