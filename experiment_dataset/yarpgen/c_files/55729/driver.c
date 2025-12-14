#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 500660618575889469ULL;
unsigned char var_1 = (unsigned char)35;
unsigned short var_3 = (unsigned short)30816;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1079446847U;
unsigned long long int var_8 = 2588597485897582517ULL;
int zero = 0;
int var_10 = -857465013;
unsigned int var_11 = 779360299U;
short var_12 = (short)-28586;
_Bool var_13 = (_Bool)1;
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
