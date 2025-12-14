#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3018686775U;
int var_6 = 1969077813;
long long int var_7 = -4585522266779664675LL;
unsigned char var_8 = (unsigned char)56;
unsigned int var_10 = 3902752801U;
_Bool var_11 = (_Bool)0;
long long int var_13 = -2055936628508984693LL;
short var_16 = (short)-12041;
long long int var_17 = 5317476209273458767LL;
unsigned char var_18 = (unsigned char)131;
int zero = 0;
signed char var_19 = (signed char)-39;
long long int var_20 = -2024144224240715339LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)2206;
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
