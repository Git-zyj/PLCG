#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
unsigned int var_3 = 3345130858U;
short var_4 = (short)-3373;
short var_5 = (short)2915;
short var_7 = (short)122;
int zero = 0;
unsigned int var_10 = 4035866216U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-80;
unsigned short var_13 = (unsigned short)42211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
