#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4597;
signed char var_5 = (signed char)73;
unsigned long long int var_6 = 7168509896163532072ULL;
unsigned short var_9 = (unsigned short)57344;
short var_12 = (short)-32562;
unsigned int var_14 = 1430480253U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-26;
short var_22 = (short)-15798;
signed char var_23 = (signed char)-65;
void init() {
}

void checksum() {
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
