#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3206474263322621799LL;
unsigned char var_1 = (unsigned char)34;
int var_5 = -950478691;
unsigned int var_7 = 4212373323U;
short var_8 = (short)-24024;
unsigned int var_13 = 4022148452U;
unsigned int var_14 = 3943540641U;
unsigned long long int var_15 = 17054812819628775284ULL;
signed char var_17 = (signed char)29;
long long int var_18 = -6798822908516266287LL;
int zero = 0;
unsigned int var_19 = 2732168883U;
unsigned short var_20 = (unsigned short)39030;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
