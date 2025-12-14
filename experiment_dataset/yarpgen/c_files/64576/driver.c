#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
unsigned int var_2 = 4086329111U;
unsigned int var_3 = 2459833020U;
signed char var_5 = (signed char)49;
long long int var_8 = -3593776553003341150LL;
int zero = 0;
unsigned long long int var_15 = 11536019638200961735ULL;
unsigned long long int var_16 = 9644831544275047612ULL;
unsigned int var_17 = 1505972222U;
unsigned long long int var_18 = 8111944406120119913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
