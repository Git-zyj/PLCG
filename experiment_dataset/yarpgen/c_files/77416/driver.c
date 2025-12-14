#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)86;
int var_7 = 894461947;
long long int var_9 = -6642071555358837451LL;
int var_10 = 771364002;
int var_17 = 1520766873;
int zero = 0;
int var_18 = 766852701;
unsigned long long int var_19 = 8173530578401291855ULL;
unsigned long long int var_20 = 3248726121955383810ULL;
int var_21 = 164336280;
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
