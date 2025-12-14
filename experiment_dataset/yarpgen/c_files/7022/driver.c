#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -110742405;
_Bool var_5 = (_Bool)1;
long long int var_11 = -7750187395338922934LL;
int zero = 0;
signed char var_13 = (signed char)-8;
long long int var_14 = 2240255017252439695LL;
signed char var_15 = (signed char)-119;
unsigned short var_16 = (unsigned short)21032;
unsigned short var_17 = (unsigned short)56987;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
