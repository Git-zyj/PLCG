#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)63398;
unsigned long long int var_3 = 16229563985373886004ULL;
long long int var_8 = 1037319977121007764LL;
long long int var_9 = 2321961754088024613LL;
signed char var_10 = (signed char)-56;
int zero = 0;
unsigned long long int var_12 = 1733953382798667359ULL;
unsigned int var_13 = 542935418U;
void init() {
}

void checksum() {
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
