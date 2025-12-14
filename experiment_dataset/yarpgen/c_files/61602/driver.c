#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 575821291;
unsigned short var_1 = (unsigned short)28480;
int var_3 = 1236633862;
short var_5 = (short)-819;
unsigned short var_6 = (unsigned short)39223;
signed char var_7 = (signed char)113;
signed char var_10 = (signed char)55;
unsigned int var_11 = 2486380965U;
short var_13 = (short)2028;
signed char var_15 = (signed char)-103;
unsigned long long int var_16 = 3426959116488002067ULL;
int zero = 0;
signed char var_17 = (signed char)23;
unsigned long long int var_18 = 9724672817233345462ULL;
unsigned int var_19 = 2117792602U;
int var_20 = 2069119273;
long long int var_21 = -2667048516740354400LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
