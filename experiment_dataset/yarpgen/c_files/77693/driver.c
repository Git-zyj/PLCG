#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14572327318706474423ULL;
unsigned short var_3 = (unsigned short)53587;
unsigned long long int var_4 = 7832352427685767052ULL;
unsigned int var_14 = 3763351082U;
int zero = 0;
unsigned short var_15 = (unsigned short)9713;
unsigned short var_16 = (unsigned short)33661;
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
