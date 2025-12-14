#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10039;
unsigned short var_2 = (unsigned short)13366;
unsigned short var_5 = (unsigned short)53293;
long long int var_9 = -3742319664306951066LL;
short var_11 = (short)-3452;
int zero = 0;
unsigned long long int var_14 = 580449841274391727ULL;
unsigned short var_15 = (unsigned short)1372;
unsigned int var_16 = 249479201U;
unsigned long long int var_17 = 16553641389098374619ULL;
short var_18 = (short)-19283;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
