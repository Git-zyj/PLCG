#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28328;
_Bool var_6 = (_Bool)0;
int var_12 = 2000193682;
unsigned char var_14 = (unsigned char)248;
_Bool var_15 = (_Bool)1;
long long int var_17 = -5639365092014017852LL;
int zero = 0;
short var_19 = (short)12843;
signed char var_20 = (signed char)-16;
_Bool var_21 = (_Bool)0;
int var_22 = 1632783689;
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
