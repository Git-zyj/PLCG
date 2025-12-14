#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3901613406383650411ULL;
unsigned char var_13 = (unsigned char)154;
unsigned short var_14 = (unsigned short)61936;
int zero = 0;
int var_16 = -563553324;
long long int var_17 = 241293437471086838LL;
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
