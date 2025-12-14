#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-19245;
long long int var_10 = -8942851935611917357LL;
unsigned short var_12 = (unsigned short)60697;
signed char var_13 = (signed char)-40;
short var_14 = (short)30018;
int var_15 = 1563529335;
int var_16 = 405892092;
signed char var_17 = (signed char)124;
int zero = 0;
unsigned long long int var_18 = 5722033732252857858ULL;
int var_19 = -1613194830;
long long int var_20 = -8915994887377491958LL;
void init() {
}

void checksum() {
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
