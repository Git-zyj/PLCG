#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4210;
long long int var_3 = 5925731388102517703LL;
int var_7 = -282222145;
unsigned long long int var_8 = 14443347482813856099ULL;
int zero = 0;
short var_10 = (short)28404;
unsigned short var_11 = (unsigned short)43711;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
