#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50814;
unsigned int var_9 = 959143120U;
short var_10 = (short)7236;
int zero = 0;
signed char var_11 = (signed char)9;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-28422;
int var_14 = 1930875060;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
