#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -386789041;
unsigned char var_3 = (unsigned char)87;
unsigned long long int var_4 = 15768636928634389774ULL;
short var_5 = (short)-7833;
unsigned char var_6 = (unsigned char)157;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-26293;
int var_11 = -1361861576;
int zero = 0;
signed char var_12 = (signed char)16;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)86;
long long int var_15 = 2400013172196880473LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
