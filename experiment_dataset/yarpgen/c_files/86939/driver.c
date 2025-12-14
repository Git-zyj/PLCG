#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4707986529950723176LL;
short var_7 = (short)-18594;
unsigned int var_8 = 1686192293U;
short var_10 = (short)-10252;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)7001;
unsigned int var_13 = 3442707461U;
unsigned int var_14 = 3137023278U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2460969559U;
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
