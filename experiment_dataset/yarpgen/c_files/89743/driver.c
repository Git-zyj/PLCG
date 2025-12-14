#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14489651624139651934ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)36727;
signed char var_13 = (signed char)20;
int zero = 0;
short var_16 = (short)-17618;
unsigned int var_17 = 3065513083U;
unsigned char var_18 = (unsigned char)49;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
