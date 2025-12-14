#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 1120125734;
unsigned char var_6 = (unsigned char)80;
unsigned short var_10 = (unsigned short)4535;
int var_11 = -331538733;
int zero = 0;
unsigned int var_12 = 3874421618U;
long long int var_13 = 3174260140313983503LL;
unsigned long long int var_14 = 9275427164111804780ULL;
signed char var_15 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
