#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)77;
unsigned char var_3 = (unsigned char)73;
short var_8 = (short)-8758;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 6848645843650509339ULL;
unsigned char var_14 = (unsigned char)177;
short var_15 = (short)29949;
signed char var_19 = (signed char)-124;
int zero = 0;
int var_20 = -1998232782;
_Bool var_21 = (_Bool)1;
short var_22 = (short)31206;
signed char var_23 = (signed char)-14;
unsigned short var_24 = (unsigned short)23847;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
