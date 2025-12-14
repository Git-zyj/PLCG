#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2136527643615666034LL;
long long int var_8 = 3660557896710426151LL;
int var_12 = -73557444;
long long int var_13 = 6686253292663538061LL;
int zero = 0;
short var_16 = (short)-21093;
unsigned long long int var_17 = 12764891172852765212ULL;
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
