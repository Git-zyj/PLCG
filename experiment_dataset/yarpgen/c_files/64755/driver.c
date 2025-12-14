#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11242886548255711847ULL;
signed char var_4 = (signed char)120;
unsigned char var_5 = (unsigned char)24;
unsigned int var_6 = 4150510639U;
long long int var_7 = 4502456554151718162LL;
unsigned long long int var_12 = 191838572725226403ULL;
unsigned long long int var_13 = 17625605984456483736ULL;
int var_14 = -2018216277;
unsigned long long int var_17 = 15715203259263437250ULL;
unsigned char var_19 = (unsigned char)143;
int zero = 0;
unsigned long long int var_20 = 9446078635543554236ULL;
signed char var_21 = (signed char)-114;
signed char var_22 = (signed char)-94;
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
