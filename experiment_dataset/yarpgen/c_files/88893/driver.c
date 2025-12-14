#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 460244575U;
unsigned char var_2 = (unsigned char)63;
long long int var_4 = 5214975323982523666LL;
unsigned short var_6 = (unsigned short)62874;
unsigned short var_8 = (unsigned short)34617;
_Bool var_12 = (_Bool)1;
int var_13 = -1540872610;
signed char var_14 = (signed char)-122;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
unsigned int var_16 = 1984080439U;
unsigned int var_17 = 363983299U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
