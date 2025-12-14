#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)211;
unsigned long long int var_9 = 4267963969830258091ULL;
signed char var_11 = (signed char)57;
unsigned char var_12 = (unsigned char)113;
int zero = 0;
unsigned long long int var_15 = 17773109432098355971ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 2035230393;
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
