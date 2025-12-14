#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-99;
unsigned long long int var_4 = 15256642953253952181ULL;
unsigned int var_6 = 3528751905U;
int var_10 = -1543702514;
int var_11 = -162391029;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14920670337615550600ULL;
unsigned long long int var_17 = 1191291985536900045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
