#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2898971864U;
unsigned char var_1 = (unsigned char)110;
int var_2 = -1179534493;
unsigned int var_4 = 2860110270U;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_8 = 1300589332;
signed char var_11 = (signed char)-120;
int var_13 = 1080680460;
_Bool var_14 = (_Bool)0;
short var_15 = (short)1530;
int zero = 0;
unsigned long long int var_16 = 16325773895615083190ULL;
signed char var_17 = (signed char)18;
long long int var_18 = 9089215300863736241LL;
_Bool var_19 = (_Bool)1;
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
