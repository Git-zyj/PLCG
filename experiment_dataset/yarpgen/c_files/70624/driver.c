#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9152371435238395414ULL;
unsigned long long int var_4 = 5274149010484667659ULL;
unsigned short var_6 = (unsigned short)46854;
short var_9 = (short)26306;
unsigned int var_10 = 2311920075U;
unsigned long long int var_11 = 12046588801227363878ULL;
int zero = 0;
long long int var_16 = -3776029244872544400LL;
unsigned short var_17 = (unsigned short)22324;
unsigned int var_18 = 4262344600U;
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
