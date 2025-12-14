#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1158975983U;
short var_1 = (short)7679;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-30745;
unsigned int var_4 = 2841494735U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)4454;
unsigned long long int var_8 = 15342394657687572296ULL;
int zero = 0;
long long int var_10 = 4089263554395043247LL;
unsigned long long int var_11 = 11542169629804361413ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
