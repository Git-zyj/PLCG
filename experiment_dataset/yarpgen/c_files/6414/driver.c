#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9176620217096076262LL;
long long int var_3 = -8357655440238203687LL;
signed char var_5 = (signed char)16;
long long int var_6 = 5455443833628790391LL;
short var_7 = (short)15914;
long long int var_10 = -8892773583966827241LL;
unsigned long long int var_11 = 15081711475288466669ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1085419066;
unsigned char var_14 = (unsigned char)192;
short var_15 = (short)-12762;
short var_16 = (short)-29257;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
