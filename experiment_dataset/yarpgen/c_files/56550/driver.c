#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 883600469643686572LL;
unsigned long long int var_2 = 11291506127806385007ULL;
unsigned long long int var_4 = 762414137597328517ULL;
unsigned int var_9 = 1098738305U;
short var_10 = (short)17761;
signed char var_12 = (signed char)-75;
unsigned short var_15 = (unsigned short)64381;
int var_16 = 402172623;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
long long int var_19 = -1388969253487984553LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
