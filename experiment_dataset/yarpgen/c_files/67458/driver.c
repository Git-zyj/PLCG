#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 465184562U;
short var_6 = (short)7201;
unsigned int var_7 = 1523231913U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 662046681U;
long long int var_11 = 8572228350818415473LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 369278144U;
int zero = 0;
signed char var_16 = (signed char)-59;
unsigned short var_17 = (unsigned short)23862;
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
