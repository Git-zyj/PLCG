#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1436332202U;
unsigned short var_6 = (unsigned short)52518;
long long int var_8 = 6067821117222688348LL;
long long int var_14 = 3358184746951402928LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-59;
int zero = 0;
signed char var_20 = (signed char)-27;
signed char var_21 = (signed char)-59;
short var_22 = (short)-14956;
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
