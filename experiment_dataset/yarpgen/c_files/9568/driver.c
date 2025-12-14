#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24866;
unsigned long long int var_3 = 7089859039594559795ULL;
long long int var_5 = 397506769103003053LL;
int var_10 = 431872271;
int zero = 0;
unsigned short var_16 = (unsigned short)22055;
signed char var_17 = (signed char)68;
void init() {
}

void checksum() {
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
