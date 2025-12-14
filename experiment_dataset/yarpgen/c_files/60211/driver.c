#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-92;
long long int var_6 = -4570295756723220891LL;
signed char var_7 = (signed char)-112;
signed char var_8 = (signed char)43;
short var_10 = (short)-1889;
unsigned long long int var_15 = 11325125222331169886ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-36;
unsigned char var_19 = (unsigned char)1;
long long int var_20 = -8151593511034047543LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 159330164U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
