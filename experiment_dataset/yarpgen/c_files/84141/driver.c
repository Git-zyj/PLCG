#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20618;
int var_1 = -936353814;
unsigned int var_2 = 1676045036U;
signed char var_6 = (signed char)-86;
unsigned int var_13 = 136628705U;
int zero = 0;
unsigned long long int var_16 = 2260963686763554582ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-7594;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
