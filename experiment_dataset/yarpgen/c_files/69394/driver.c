#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1953606134U;
int var_5 = -1778137549;
unsigned short var_6 = (unsigned short)11881;
short var_7 = (short)18123;
unsigned char var_8 = (unsigned char)194;
int var_9 = -2113213228;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7856739987556751003LL;
int zero = 0;
long long int var_17 = 5024117367335817873LL;
int var_18 = 1778993843;
unsigned char var_19 = (unsigned char)60;
void init() {
}

void checksum() {
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
