#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1910477812;
unsigned int var_7 = 507124581U;
unsigned short var_11 = (unsigned short)8172;
long long int var_13 = 4806106991670631645LL;
unsigned int var_15 = 1022514041U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 5175314;
short var_22 = (short)31652;
unsigned int var_23 = 960611546U;
void init() {
}

void checksum() {
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
