#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-70;
unsigned long long int var_6 = 12035873989840088224ULL;
unsigned long long int var_10 = 5615656205752640846ULL;
unsigned int var_12 = 2572203231U;
int zero = 0;
unsigned char var_16 = (unsigned char)89;
unsigned int var_17 = 110762364U;
unsigned long long int var_18 = 11033950522310965118ULL;
unsigned int var_19 = 2021597854U;
unsigned int var_20 = 2229502146U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
