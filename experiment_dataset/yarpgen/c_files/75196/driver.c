#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 880394292;
int var_3 = 1472591626;
unsigned long long int var_6 = 2615185632029953514ULL;
int var_7 = -208113512;
int var_8 = 240874333;
int zero = 0;
unsigned long long int var_15 = 14069718876459774505ULL;
signed char var_16 = (signed char)-105;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5956235694367943321LL;
unsigned char var_19 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
