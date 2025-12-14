#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1381671034;
unsigned short var_1 = (unsigned short)8986;
unsigned short var_2 = (unsigned short)39754;
short var_3 = (short)-12755;
unsigned char var_15 = (unsigned char)19;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)29098;
signed char var_20 = (signed char)-68;
unsigned short var_21 = (unsigned short)6481;
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
