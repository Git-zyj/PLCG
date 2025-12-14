#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28399;
int var_4 = 25661875;
long long int var_6 = 749868356715954552LL;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)10102;
int zero = 0;
unsigned long long int var_15 = 15613944555764101131ULL;
unsigned char var_16 = (unsigned char)25;
unsigned int var_17 = 1207673035U;
unsigned int var_18 = 50652910U;
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
