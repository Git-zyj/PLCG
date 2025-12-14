#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1602672471;
unsigned int var_14 = 2461251770U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned int var_18 = 25054093U;
long long int var_19 = 3271252621390781948LL;
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
