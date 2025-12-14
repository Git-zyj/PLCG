#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11777560692578864193ULL;
unsigned char var_2 = (unsigned char)166;
unsigned long long int var_3 = 6131448062637802811ULL;
unsigned char var_4 = (unsigned char)229;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3295099262380158844ULL;
unsigned char var_18 = (unsigned char)88;
unsigned long long int var_19 = 394145396823871605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
