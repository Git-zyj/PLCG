#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2068008324U;
unsigned int var_1 = 2938049678U;
unsigned long long int var_2 = 13065910090243352691ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14976060713856946763ULL;
unsigned int var_5 = 1438528308U;
signed char var_6 = (signed char)-47;
unsigned long long int var_7 = 9923649027115507590ULL;
unsigned long long int var_8 = 3370612671024237893ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-17778;
int zero = 0;
signed char var_11 = (signed char)-40;
unsigned int var_12 = 706958007U;
int var_13 = -544215510;
unsigned int var_14 = 4183888591U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
