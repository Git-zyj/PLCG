#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1081922091776182422ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15623204047577765255ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)0;
int var_11 = 1695667210;
signed char var_12 = (signed char)3;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)107;
unsigned short var_15 = (unsigned short)25643;
unsigned int var_16 = 2747769810U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
