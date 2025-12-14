#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19978;
long long int var_4 = 6942520309147236889LL;
short var_10 = (short)-31544;
unsigned short var_18 = (unsigned short)10938;
int zero = 0;
signed char var_19 = (signed char)75;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)35;
unsigned char var_22 = (unsigned char)87;
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
