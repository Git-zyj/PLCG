#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2409531937U;
unsigned int var_8 = 3704194466U;
short var_12 = (short)-1144;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_20 = -4660526542403038271LL;
unsigned short var_21 = (unsigned short)50128;
short var_22 = (short)18530;
_Bool var_23 = (_Bool)0;
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
