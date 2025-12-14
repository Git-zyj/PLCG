#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60225;
unsigned char var_3 = (unsigned char)124;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-17;
signed char var_7 = (signed char)-81;
int var_10 = -1427321113;
unsigned long long int var_11 = 2157457678331249491ULL;
int var_13 = -1678494008;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-86;
unsigned short var_20 = (unsigned short)40758;
short var_21 = (short)21920;
void init() {
}

void checksum() {
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
