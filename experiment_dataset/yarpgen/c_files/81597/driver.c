#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
long long int var_1 = 3494625996476267617LL;
unsigned long long int var_2 = 11842335930998751586ULL;
unsigned short var_3 = (unsigned short)45090;
signed char var_5 = (signed char)77;
long long int var_8 = 1250461466753625155LL;
short var_10 = (short)-5588;
unsigned int var_11 = 3398429443U;
signed char var_13 = (signed char)46;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 705456740853734645LL;
long long int var_16 = -8515433611171929018LL;
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
