#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned long long int var_13 = 7934498771449815913ULL;
int zero = 0;
long long int var_18 = 3202609953407371264LL;
unsigned long long int var_19 = 13680358898410300726ULL;
signed char var_20 = (signed char)21;
unsigned short var_21 = (unsigned short)48811;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
