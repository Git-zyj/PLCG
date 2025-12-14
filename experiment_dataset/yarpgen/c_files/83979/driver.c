#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
_Bool var_5 = (_Bool)1;
signed char var_12 = (signed char)17;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12509242610057128132ULL;
unsigned short var_15 = (unsigned short)46815;
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
