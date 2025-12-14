#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6362362787777159208LL;
unsigned char var_5 = (unsigned char)255;
unsigned short var_7 = (unsigned short)20382;
int var_8 = 38512019;
_Bool var_14 = (_Bool)1;
long long int var_16 = 7089101667215180175LL;
int zero = 0;
long long int var_19 = 4422521935678968617LL;
unsigned short var_20 = (unsigned short)28274;
unsigned int var_21 = 1069219826U;
short var_22 = (short)-29271;
unsigned int var_23 = 527911805U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
