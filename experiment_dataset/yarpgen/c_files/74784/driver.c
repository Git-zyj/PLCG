#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 338818973U;
long long int var_5 = 4889135091439026925LL;
int var_9 = -113751843;
unsigned short var_10 = (unsigned short)18429;
unsigned long long int var_11 = 93922970180945809ULL;
unsigned short var_15 = (unsigned short)5484;
int zero = 0;
signed char var_16 = (signed char)117;
unsigned long long int var_17 = 5063369306336630768ULL;
int var_18 = 790269890;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
