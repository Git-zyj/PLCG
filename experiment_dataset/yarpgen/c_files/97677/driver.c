#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned int var_5 = 2600420758U;
unsigned short var_6 = (unsigned short)9628;
short var_8 = (short)-24903;
unsigned char var_10 = (unsigned char)97;
signed char var_13 = (signed char)49;
int var_14 = -1353565094;
unsigned int var_16 = 2625788914U;
int zero = 0;
unsigned int var_18 = 3105697462U;
unsigned long long int var_19 = 7016356011554640420ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
