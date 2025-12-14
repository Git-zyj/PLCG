#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16687827774586855171ULL;
short var_5 = (short)1414;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14104485673669284612ULL;
signed char var_10 = (signed char)-2;
unsigned int var_11 = 2023436571U;
unsigned long long int var_12 = 12439204864504735463ULL;
signed char var_16 = (signed char)-51;
int zero = 0;
short var_18 = (short)3823;
unsigned short var_19 = (unsigned short)36568;
int var_20 = -1662066206;
unsigned short var_21 = (unsigned short)53401;
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
