#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5623;
signed char var_6 = (signed char)5;
signed char var_9 = (signed char)-105;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)65;
long long int var_16 = 4747619322337852619LL;
unsigned short var_17 = (unsigned short)63863;
int var_18 = 2131238855;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
