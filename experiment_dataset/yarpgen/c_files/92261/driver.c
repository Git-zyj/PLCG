#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3233676230U;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)198;
unsigned long long int var_6 = 6168620301550235130ULL;
unsigned long long int var_11 = 1728171154802239120ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3113915627U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
