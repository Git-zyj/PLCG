#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7494;
short var_1 = (short)1034;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_5 = 221828284;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)65;
int zero = 0;
unsigned short var_10 = (unsigned short)48914;
short var_11 = (short)20881;
unsigned int var_12 = 1117619980U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
