#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)22;
unsigned char var_5 = (unsigned char)250;
unsigned int var_6 = 3100441841U;
signed char var_10 = (signed char)112;
int zero = 0;
unsigned int var_11 = 2896929877U;
unsigned char var_12 = (unsigned char)136;
unsigned int var_13 = 2857760737U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
