#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)58;
unsigned short var_16 = (unsigned short)47740;
unsigned char var_17 = (unsigned char)137;
int zero = 0;
short var_19 = (short)-9797;
_Bool var_20 = (_Bool)0;
short var_21 = (short)21662;
unsigned short var_22 = (unsigned short)46541;
signed char var_23 = (signed char)-88;
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
