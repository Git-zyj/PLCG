#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13938321166261550091ULL;
long long int var_1 = -5236197822724075394LL;
unsigned long long int var_2 = 5296572660573199755ULL;
unsigned long long int var_3 = 17646054323623575821ULL;
unsigned char var_4 = (unsigned char)141;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)127;
unsigned int var_8 = 1328948405U;
int zero = 0;
signed char var_12 = (signed char)15;
unsigned int var_13 = 775867703U;
long long int var_14 = 340181723717706396LL;
long long int var_15 = -3291213985357474421LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
