#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-70;
unsigned int var_5 = 2649318863U;
signed char var_6 = (signed char)58;
unsigned short var_8 = (unsigned short)21806;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)42161;
unsigned int var_12 = 4137296472U;
int zero = 0;
short var_13 = (short)-18047;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)55967;
long long int var_16 = -2726052672648462521LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
