#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1901514149801681351ULL;
unsigned short var_3 = (unsigned short)14593;
signed char var_4 = (signed char)-45;
unsigned short var_9 = (unsigned short)47285;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = -2243909873015450036LL;
signed char var_13 = (signed char)86;
void init() {
}

void checksum() {
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
