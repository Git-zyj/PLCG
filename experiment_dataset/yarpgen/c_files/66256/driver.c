#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)55;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-10011;
signed char var_11 = (signed char)-11;
short var_12 = (short)2457;
unsigned int var_15 = 3899254515U;
signed char var_18 = (signed char)49;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)56115;
unsigned char var_21 = (unsigned char)94;
signed char var_22 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
