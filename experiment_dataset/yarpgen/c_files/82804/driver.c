#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)609;
long long int var_10 = -9146842177815354707LL;
long long int var_13 = 5721611377180085475LL;
int zero = 0;
int var_15 = 585474004;
signed char var_16 = (signed char)-95;
long long int var_17 = 7964756140487043804LL;
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
