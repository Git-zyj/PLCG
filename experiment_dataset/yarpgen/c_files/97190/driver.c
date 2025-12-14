#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 4110024306U;
short var_5 = (short)23732;
unsigned char var_6 = (unsigned char)16;
unsigned long long int var_8 = 6004583229459379074ULL;
unsigned char var_10 = (unsigned char)186;
unsigned long long int var_12 = 6855190000557864592ULL;
int zero = 0;
short var_14 = (short)-3907;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
