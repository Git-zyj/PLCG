#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28444;
unsigned int var_1 = 27095325U;
unsigned long long int var_2 = 10351515949552841194ULL;
short var_3 = (short)1524;
short var_5 = (short)14277;
unsigned char var_6 = (unsigned char)209;
long long int var_8 = -3404833246771914168LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)48716;
unsigned int var_11 = 1804125225U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3806991722U;
long long int var_14 = -3241990721688643554LL;
unsigned long long int var_15 = 6332449020785001246ULL;
int zero = 0;
unsigned int var_17 = 446185801U;
unsigned int var_18 = 3718600857U;
short var_19 = (short)13226;
short var_20 = (short)-23412;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
