#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)76;
long long int var_7 = 740743408634510929LL;
unsigned long long int var_13 = 11376992917529674528ULL;
unsigned int var_14 = 3712981408U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 29636354U;
int zero = 0;
unsigned int var_18 = 2901539773U;
int var_19 = 660773004;
void init() {
}

void checksum() {
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
