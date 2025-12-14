#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)42;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-120;
long long int var_18 = -4575221311007654287LL;
unsigned long long int var_19 = 5037836493644853723ULL;
unsigned char var_20 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
