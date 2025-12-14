#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7406150373147635476ULL;
unsigned char var_1 = (unsigned char)139;
short var_2 = (short)5900;
signed char var_3 = (signed char)42;
unsigned char var_5 = (unsigned char)141;
unsigned short var_6 = (unsigned short)19078;
unsigned long long int var_7 = 17592341320486770891ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1953397913;
short var_12 = (short)16977;
unsigned long long int var_13 = 15230723024644521698ULL;
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
