#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1451254462;
unsigned char var_3 = (unsigned char)174;
unsigned short var_11 = (unsigned short)49144;
unsigned int var_12 = 612354749U;
unsigned short var_13 = (unsigned short)28956;
int var_16 = 1175321033;
int zero = 0;
short var_17 = (short)-28571;
unsigned char var_18 = (unsigned char)184;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)11179;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
