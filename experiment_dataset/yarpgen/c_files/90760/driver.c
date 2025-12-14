#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22810;
long long int var_1 = 2782376532893825629LL;
long long int var_3 = 2802561919691206951LL;
short var_4 = (short)31501;
int var_5 = -2101260283;
unsigned short var_8 = (unsigned short)22172;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
unsigned long long int var_12 = 10811955517545054366ULL;
long long int var_13 = 3298336825878018847LL;
int var_14 = -1507326397;
int var_15 = -980652916;
unsigned int var_16 = 1314923263U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
