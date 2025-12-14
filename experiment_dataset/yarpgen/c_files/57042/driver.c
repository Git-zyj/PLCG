#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3482104202U;
long long int var_3 = 7662302981176226222LL;
unsigned int var_4 = 549139893U;
short var_6 = (short)-24728;
unsigned long long int var_8 = 2366964624610024958ULL;
unsigned long long int var_10 = 5101308634503929961ULL;
unsigned short var_11 = (unsigned short)4740;
int zero = 0;
unsigned short var_15 = (unsigned short)56923;
unsigned int var_16 = 3333555990U;
long long int var_17 = 5437838058893956310LL;
long long int var_18 = 184959754780878091LL;
void init() {
}

void checksum() {
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
