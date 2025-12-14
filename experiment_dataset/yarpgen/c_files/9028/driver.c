#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56419;
signed char var_3 = (signed char)84;
unsigned char var_5 = (unsigned char)209;
short var_6 = (short)30057;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)36885;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14182548288612816833ULL;
short var_16 = (short)4280;
signed char var_17 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
