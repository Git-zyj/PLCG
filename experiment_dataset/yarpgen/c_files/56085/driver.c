#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6402945396261228754LL;
signed char var_6 = (signed char)69;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)98;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2556448447U;
int zero = 0;
signed char var_17 = (signed char)73;
signed char var_18 = (signed char)-14;
short var_19 = (short)30572;
unsigned long long int var_20 = 7391933518279480302ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
