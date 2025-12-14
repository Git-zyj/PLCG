#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13002;
signed char var_3 = (signed char)77;
signed char var_4 = (signed char)-67;
unsigned char var_9 = (unsigned char)175;
unsigned int var_12 = 1470805561U;
unsigned short var_13 = (unsigned short)58988;
int var_14 = 1352401995;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1836600551;
int var_17 = -78419880;
int var_18 = 1628951190;
long long int var_19 = -1667383693328985902LL;
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
