#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8410243964192757771ULL;
long long int var_6 = -2254664247167968645LL;
unsigned int var_8 = 3643569324U;
int var_14 = 496845904;
int zero = 0;
int var_15 = -1247179216;
unsigned short var_16 = (unsigned short)43589;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
