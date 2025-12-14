#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_7 = 768669254;
_Bool var_10 = (_Bool)0;
unsigned long long int var_17 = 3155077232869961877ULL;
signed char var_18 = (signed char)62;
int zero = 0;
signed char var_19 = (signed char)117;
unsigned char var_20 = (unsigned char)149;
unsigned short var_21 = (unsigned short)44924;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
