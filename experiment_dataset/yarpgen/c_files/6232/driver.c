#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
_Bool var_1 = (_Bool)0;
long long int var_2 = -788942919594039507LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11779961879844262711ULL;
short var_8 = (short)25754;
unsigned int var_12 = 3964568237U;
short var_14 = (short)28925;
int zero = 0;
long long int var_15 = 8551020754278756063LL;
unsigned long long int var_16 = 8517900905250526508ULL;
int var_17 = -570962340;
unsigned int var_18 = 1425556208U;
unsigned int var_19 = 874195270U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
