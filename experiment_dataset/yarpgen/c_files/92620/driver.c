#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
signed char var_3 = (signed char)-20;
int var_11 = -709834167;
signed char var_12 = (signed char)-32;
long long int var_14 = 1298953770866700231LL;
unsigned short var_15 = (unsigned short)62735;
unsigned char var_18 = (unsigned char)249;
int zero = 0;
unsigned int var_20 = 1473861928U;
unsigned int var_21 = 3513134449U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
