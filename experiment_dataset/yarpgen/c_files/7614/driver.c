#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)58736;
short var_5 = (short)1080;
int var_9 = 1827944873;
unsigned short var_10 = (unsigned short)27799;
short var_11 = (short)-29247;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)5;
int var_17 = -1546096749;
int zero = 0;
short var_18 = (short)3986;
unsigned short var_19 = (unsigned short)22809;
unsigned int var_20 = 2576019957U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
