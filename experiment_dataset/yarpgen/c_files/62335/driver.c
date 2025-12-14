#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 9615566644513506579ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1277664513U;
unsigned short var_7 = (unsigned short)62433;
unsigned char var_8 = (unsigned char)110;
unsigned int var_9 = 3363602773U;
int zero = 0;
short var_10 = (short)18407;
unsigned short var_11 = (unsigned short)46805;
int var_12 = -1148509368;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
