#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2768118753U;
signed char var_1 = (signed char)-65;
unsigned short var_3 = (unsigned short)45811;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)27;
int var_8 = 343681821;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-10375;
int zero = 0;
unsigned char var_14 = (unsigned char)178;
short var_15 = (short)21903;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
