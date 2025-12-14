#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7008707484996584466ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)23250;
unsigned char var_7 = (unsigned char)199;
signed char var_8 = (signed char)26;
unsigned short var_16 = (unsigned short)3265;
unsigned char var_17 = (unsigned char)123;
int zero = 0;
unsigned int var_19 = 910844674U;
unsigned long long int var_20 = 13271987400047524176ULL;
void init() {
}

void checksum() {
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
