#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2029357215U;
long long int var_4 = 5405933392677135324LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)175;
short var_15 = (short)-25744;
void init() {
}

void checksum() {
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
