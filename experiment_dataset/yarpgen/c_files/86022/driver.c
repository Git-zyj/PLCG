#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-7132;
unsigned long long int var_6 = 6136759767764397363ULL;
short var_9 = (short)32762;
short var_10 = (short)-12152;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-32;
signed char var_17 = (signed char)117;
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
