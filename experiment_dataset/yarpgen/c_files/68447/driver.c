#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2893310005U;
short var_2 = (short)9062;
unsigned long long int var_6 = 11124800376767922240ULL;
short var_7 = (short)13659;
long long int var_9 = 2934960509590020505LL;
long long int var_10 = -8972557452244282370LL;
unsigned char var_11 = (unsigned char)3;
int zero = 0;
signed char var_12 = (signed char)77;
unsigned short var_13 = (unsigned short)60984;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
