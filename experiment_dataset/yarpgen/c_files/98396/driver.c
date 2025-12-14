#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4027829521U;
unsigned long long int var_3 = 5327997663864194594ULL;
unsigned long long int var_4 = 4610722061977559140ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 3938950329U;
unsigned long long int var_13 = 6879495532372793191ULL;
unsigned int var_15 = 1562208548U;
int zero = 0;
unsigned char var_17 = (unsigned char)64;
unsigned char var_18 = (unsigned char)192;
long long int var_19 = 8699581303687868990LL;
unsigned long long int var_20 = 2038819732065537353ULL;
unsigned int var_21 = 3096734508U;
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
