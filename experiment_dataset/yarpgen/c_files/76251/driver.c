#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4338748688324533897ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 1598225268;
short var_4 = (short)-26298;
signed char var_5 = (signed char)-13;
short var_6 = (short)-25816;
unsigned long long int var_7 = 3521170006766211175ULL;
long long int var_8 = -2902595153549262885LL;
signed char var_9 = (signed char)6;
int zero = 0;
unsigned long long int var_10 = 1385945755546886199ULL;
unsigned long long int var_11 = 15547909074591453067ULL;
short var_12 = (short)-32474;
_Bool var_13 = (_Bool)0;
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
