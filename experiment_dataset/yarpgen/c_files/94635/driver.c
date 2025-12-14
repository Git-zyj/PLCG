#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2708;
signed char var_4 = (signed char)115;
unsigned long long int var_5 = 4821717449439612992ULL;
unsigned short var_7 = (unsigned short)12776;
unsigned long long int var_8 = 1853782631237536189ULL;
long long int var_9 = 3327775273690544890LL;
int zero = 0;
signed char var_13 = (signed char)68;
long long int var_14 = 6034159453352722849LL;
unsigned long long int var_15 = 9939521971387750283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
