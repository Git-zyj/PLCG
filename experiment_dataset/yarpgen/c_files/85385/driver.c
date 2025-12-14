#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2146459462899810135ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
unsigned int var_18 = 1122984132U;
long long int var_19 = 773344501291828091LL;
void init() {
}

void checksum() {
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
