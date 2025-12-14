#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 284221170;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-120;
short var_4 = (short)-22913;
short var_6 = (short)-32627;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 14945833431878530630ULL;
unsigned short var_16 = (unsigned short)65065;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)51996;
short var_21 = (short)-30536;
int var_22 = -2028994323;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
