#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25995;
short var_5 = (short)18073;
unsigned short var_6 = (unsigned short)7038;
signed char var_7 = (signed char)-12;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)24329;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6349536538681897185LL;
signed char var_20 = (signed char)78;
short var_21 = (short)-16840;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
