#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35811;
unsigned int var_1 = 28848694U;
unsigned char var_5 = (unsigned char)69;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)10;
int zero = 0;
long long int var_10 = 1540389071456447730LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3928476613473629143LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
