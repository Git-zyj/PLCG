#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)58692;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)5055;
unsigned char var_10 = (unsigned char)149;
unsigned short var_14 = (unsigned short)16277;
int zero = 0;
long long int var_15 = 4710052827583705179LL;
unsigned short var_16 = (unsigned short)30081;
signed char var_17 = (signed char)118;
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
