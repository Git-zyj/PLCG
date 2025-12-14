#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1892989551U;
unsigned int var_3 = 3336132686U;
long long int var_4 = 3600396879580335937LL;
long long int var_5 = 8988501536309554351LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)62028;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)39866;
unsigned int var_19 = 3188034258U;
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
