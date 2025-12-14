#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)101;
unsigned int var_4 = 4172947989U;
long long int var_5 = -5114279477589769641LL;
int var_6 = -1204048053;
signed char var_7 = (signed char)-97;
int var_9 = 549355095;
unsigned int var_10 = 1962374459U;
short var_13 = (short)28723;
unsigned int var_15 = 4217546948U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)39926;
void init() {
}

void checksum() {
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
