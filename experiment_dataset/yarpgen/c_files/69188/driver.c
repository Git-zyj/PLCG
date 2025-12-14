#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28829;
_Bool var_8 = (_Bool)1;
long long int var_15 = 2202789823541495190LL;
int zero = 0;
unsigned long long int var_19 = 5070957030973519823ULL;
int var_20 = 1016254202;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
