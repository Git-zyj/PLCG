#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3177;
_Bool var_3 = (_Bool)1;
unsigned int var_9 = 1904873195U;
unsigned int var_11 = 2739911157U;
short var_12 = (short)23334;
unsigned int var_17 = 773099537U;
int zero = 0;
int var_20 = 868574831;
short var_21 = (short)-26077;
unsigned int var_22 = 3831193279U;
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
