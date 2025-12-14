#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3767231298655068118LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)20;
unsigned int var_7 = 896992154U;
long long int var_11 = -2189076872682851156LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1302044767U;
unsigned int var_15 = 1460475095U;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)15773;
long long int var_20 = 4063422561076714296LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
