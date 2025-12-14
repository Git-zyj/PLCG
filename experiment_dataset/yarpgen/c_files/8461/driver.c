#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)117;
unsigned long long int var_6 = 1961817278313297312ULL;
signed char var_13 = (signed char)91;
signed char var_14 = (signed char)-101;
int zero = 0;
short var_15 = (short)20076;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
