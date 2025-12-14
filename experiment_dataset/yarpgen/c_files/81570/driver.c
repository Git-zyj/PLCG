#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
signed char var_1 = (signed char)-119;
short var_5 = (short)-27360;
signed char var_6 = (signed char)-80;
unsigned int var_7 = 4136771124U;
unsigned int var_8 = 3728426757U;
signed char var_10 = (signed char)45;
int var_11 = -1199993927;
short var_12 = (short)-15797;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)18843;
unsigned short var_17 = (unsigned short)538;
unsigned short var_18 = (unsigned short)3638;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
