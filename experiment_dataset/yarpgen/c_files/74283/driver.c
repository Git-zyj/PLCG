#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3062160214U;
int var_9 = 749177247;
unsigned char var_17 = (unsigned char)240;
int zero = 0;
unsigned short var_18 = (unsigned short)48042;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 71520941U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
