#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_8 = (unsigned short)49977;
unsigned short var_10 = (unsigned short)6415;
unsigned int var_17 = 3857192416U;
unsigned long long int var_19 = 2630301795587415539ULL;
int zero = 0;
unsigned long long int var_20 = 9072043747093251832ULL;
unsigned int var_21 = 2216982132U;
void init() {
}

void checksum() {
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
