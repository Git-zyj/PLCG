#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3509324918U;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)50498;
int zero = 0;
unsigned int var_19 = 1096204899U;
int var_20 = 928816247;
signed char var_21 = (signed char)106;
unsigned int var_22 = 3125512958U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
