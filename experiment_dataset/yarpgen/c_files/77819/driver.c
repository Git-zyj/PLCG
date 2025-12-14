#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2267893116U;
unsigned long long int var_11 = 10409872221643501285ULL;
unsigned long long int var_14 = 4095833014172749841ULL;
long long int var_15 = 4978293082855442495LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10344652852240844326ULL;
void init() {
}

void checksum() {
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
