#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 878437716515171041LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_13 = 6619386689871027063LL;
int zero = 0;
short var_14 = (short)29260;
long long int var_15 = -3485469307229078499LL;
unsigned char var_16 = (unsigned char)241;
unsigned short var_17 = (unsigned short)33811;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
