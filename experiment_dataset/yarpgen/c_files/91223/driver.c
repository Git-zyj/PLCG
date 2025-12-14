#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1070486863;
unsigned int var_8 = 2605266581U;
long long int var_15 = -6821929107500921549LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)106;
int var_20 = -313986128;
unsigned short var_21 = (unsigned short)21096;
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
