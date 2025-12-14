#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3506085031U;
signed char var_3 = (signed char)105;
long long int var_4 = -857953329788273819LL;
signed char var_6 = (signed char)55;
short var_7 = (short)7181;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 794543989U;
short var_15 = (short)-8350;
unsigned long long int var_16 = 12283151672821137277ULL;
unsigned int var_17 = 585921085U;
int zero = 0;
short var_19 = (short)9986;
short var_20 = (short)-3191;
short var_21 = (short)-10702;
signed char var_22 = (signed char)58;
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
