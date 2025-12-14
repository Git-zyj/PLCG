#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 596865612U;
unsigned int var_1 = 1813685581U;
unsigned int var_2 = 2422332064U;
unsigned int var_3 = 2472447328U;
unsigned int var_4 = 1888068752U;
int var_5 = 1255143761;
long long int var_10 = -6611777349747199783LL;
int var_11 = 1771063597;
int zero = 0;
unsigned int var_12 = 466267412U;
unsigned int var_13 = 3066114123U;
unsigned char var_14 = (unsigned char)246;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4827348182521466532LL;
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
