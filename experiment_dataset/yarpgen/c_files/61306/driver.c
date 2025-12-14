#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned char var_4 = (unsigned char)177;
int var_5 = -1583403026;
signed char var_6 = (signed char)-116;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13360300265302516512ULL;
unsigned short var_14 = (unsigned short)33489;
signed char var_18 = (signed char)86;
int zero = 0;
short var_19 = (short)-28662;
int var_20 = 1102732185;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)11;
unsigned short var_23 = (unsigned short)6523;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
