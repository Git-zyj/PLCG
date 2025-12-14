#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5376885327962828611LL;
unsigned long long int var_1 = 13284392938561682625ULL;
unsigned char var_6 = (unsigned char)146;
unsigned char var_9 = (unsigned char)122;
unsigned short var_10 = (unsigned short)43330;
int var_11 = 852516306;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)38283;
unsigned long long int var_15 = 14316860385058931227ULL;
signed char var_16 = (signed char)3;
void init() {
}

void checksum() {
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
