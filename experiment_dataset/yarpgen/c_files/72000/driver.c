#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)157;
signed char var_8 = (signed char)50;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 1961342061U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2041584715U;
int zero = 0;
short var_19 = (short)17022;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
