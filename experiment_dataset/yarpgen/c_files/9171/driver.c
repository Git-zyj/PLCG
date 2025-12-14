#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)55;
signed char var_4 = (signed char)27;
unsigned short var_6 = (unsigned short)56911;
long long int var_7 = -8197098441675100479LL;
signed char var_8 = (signed char)92;
signed char var_13 = (signed char)-65;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)28546;
long long int var_16 = 731073305081750463LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
