#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
signed char var_8 = (signed char)-32;
unsigned int var_9 = 3832437696U;
unsigned long long int var_11 = 15751101612209896638ULL;
unsigned short var_13 = (unsigned short)38754;
int var_15 = -920316497;
unsigned short var_16 = (unsigned short)34228;
short var_17 = (short)-16200;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)56610;
unsigned short var_22 = (unsigned short)32116;
long long int var_23 = 6978580646871315926LL;
unsigned long long int var_24 = 2579828321924134611ULL;
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
