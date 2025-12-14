#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23912;
unsigned char var_8 = (unsigned char)89;
long long int var_14 = 6640629964926152434LL;
long long int var_15 = -1896340919098267397LL;
short var_16 = (short)-18243;
signed char var_18 = (signed char)74;
int zero = 0;
unsigned short var_19 = (unsigned short)2679;
_Bool var_20 = (_Bool)1;
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
