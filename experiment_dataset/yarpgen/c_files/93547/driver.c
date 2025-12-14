#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5857696202579118647LL;
unsigned short var_3 = (unsigned short)45041;
unsigned int var_5 = 3075631952U;
unsigned short var_6 = (unsigned short)30745;
unsigned char var_9 = (unsigned char)121;
long long int var_10 = 538987106672441789LL;
int zero = 0;
unsigned long long int var_18 = 15701495823390543030ULL;
int var_19 = 1161343298;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
