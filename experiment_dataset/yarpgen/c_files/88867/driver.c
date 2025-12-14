#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17158107096314307430ULL;
int var_3 = 493431744;
_Bool var_4 = (_Bool)1;
long long int var_7 = -4733340384590376404LL;
int var_8 = -2004614547;
int zero = 0;
long long int var_10 = 3531308778169536773LL;
unsigned short var_11 = (unsigned short)42140;
int var_12 = -1409929231;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
