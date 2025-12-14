#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1292318449U;
unsigned char var_5 = (unsigned char)236;
unsigned long long int var_6 = 15919975844871882482ULL;
long long int var_10 = -1424673331162535085LL;
unsigned long long int var_11 = 12106824322004326385ULL;
unsigned int var_12 = 48161733U;
long long int var_14 = -8248123498442161261LL;
int zero = 0;
unsigned int var_15 = 3264001868U;
short var_16 = (short)-3619;
short var_17 = (short)29403;
signed char var_18 = (signed char)64;
signed char var_19 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
