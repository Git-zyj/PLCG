#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)253;
unsigned long long int var_8 = 17348156281324303346ULL;
long long int var_11 = 4897821485080364627LL;
unsigned int var_13 = 1987746022U;
signed char var_14 = (signed char)-117;
unsigned short var_16 = (unsigned short)62697;
unsigned int var_17 = 3655283124U;
unsigned short var_18 = (unsigned short)5491;
int zero = 0;
unsigned int var_19 = 192953472U;
unsigned int var_20 = 3460717452U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
