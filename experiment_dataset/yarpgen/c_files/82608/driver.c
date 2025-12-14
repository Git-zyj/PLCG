#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2541229273553237532ULL;
long long int var_4 = -8433022236964455680LL;
unsigned long long int var_8 = 9331970748958159503ULL;
int zero = 0;
unsigned long long int var_16 = 3785961369543887414ULL;
unsigned char var_17 = (unsigned char)14;
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
