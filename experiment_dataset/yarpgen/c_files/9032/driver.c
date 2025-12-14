#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)113;
unsigned int var_2 = 2045155818U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)127;
unsigned long long int var_10 = 9833327139544680571ULL;
unsigned int var_12 = 1305888515U;
unsigned long long int var_13 = 8060889805180001553ULL;
unsigned long long int var_16 = 12269395210068280891ULL;
int var_17 = 1131864321;
int zero = 0;
unsigned long long int var_18 = 2299152795916796423ULL;
int var_19 = 64864352;
void init() {
}

void checksum() {
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
