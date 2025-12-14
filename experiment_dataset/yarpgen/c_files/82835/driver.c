#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 2162831113143599643ULL;
unsigned int var_6 = 2813917133U;
unsigned int var_8 = 4171509204U;
unsigned long long int var_10 = 16133452680690361322ULL;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
unsigned int var_12 = 434981394U;
unsigned char var_13 = (unsigned char)200;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
