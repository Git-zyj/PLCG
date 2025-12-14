#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8014080549748423703LL;
short var_2 = (short)2181;
signed char var_3 = (signed char)15;
unsigned long long int var_5 = 16792448180697734900ULL;
unsigned long long int var_6 = 6137119441282552575ULL;
unsigned int var_13 = 1848342243U;
unsigned short var_14 = (unsigned short)39807;
int zero = 0;
unsigned char var_15 = (unsigned char)167;
signed char var_16 = (signed char)44;
unsigned long long int var_17 = 16160543037101551013ULL;
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
