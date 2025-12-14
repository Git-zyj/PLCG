#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)142;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)252;
unsigned char var_11 = (unsigned char)239;
unsigned long long int var_12 = 14882146907402349840ULL;
unsigned char var_13 = (unsigned char)26;
int zero = 0;
signed char var_16 = (signed char)43;
_Bool var_17 = (_Bool)1;
int var_18 = -401939374;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
