#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2300056244601226334LL;
unsigned int var_5 = 3219256969U;
signed char var_7 = (signed char)-5;
unsigned long long int var_9 = 5295267406377535569ULL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 2108565916;
int zero = 0;
unsigned int var_19 = 302851474U;
unsigned long long int var_20 = 14017862723760494709ULL;
short var_21 = (short)8262;
unsigned short var_22 = (unsigned short)58032;
unsigned char var_23 = (unsigned char)17;
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
