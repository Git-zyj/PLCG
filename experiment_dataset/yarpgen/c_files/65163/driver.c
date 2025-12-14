#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2085493114;
_Bool var_3 = (_Bool)1;
long long int var_4 = 8137178866683591798LL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
short var_12 = (short)28702;
unsigned int var_13 = 2791369803U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
