#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4230;
unsigned long long int var_3 = 14919211697197019181ULL;
signed char var_5 = (signed char)80;
int var_9 = -1372882029;
unsigned short var_10 = (unsigned short)12527;
int var_11 = 552648441;
int zero = 0;
int var_14 = -256086991;
signed char var_15 = (signed char)28;
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
