#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3456801102983659577ULL;
unsigned long long int var_1 = 8089540533744300611ULL;
int var_2 = 1932776218;
unsigned long long int var_5 = 12229731118414424122ULL;
unsigned short var_10 = (unsigned short)60554;
unsigned short var_12 = (unsigned short)63610;
int zero = 0;
unsigned char var_15 = (unsigned char)21;
unsigned long long int var_16 = 1579212624803503074ULL;
long long int var_17 = -6247591434628026535LL;
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
