#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29506;
long long int var_7 = 1374839505805709260LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5971;
signed char var_16 = (signed char)105;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1559914030U;
short var_20 = (short)23586;
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
