#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7177078216205234220LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-108;
unsigned int var_4 = 1358664645U;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_9 = 6831284790695220867ULL;
unsigned char var_13 = (unsigned char)83;
long long int var_16 = 8157884820050641335LL;
short var_17 = (short)-23369;
unsigned long long int var_19 = 4844530033065801548ULL;
int zero = 0;
unsigned int var_20 = 774311704U;
signed char var_21 = (signed char)64;
unsigned long long int var_22 = 5761550852064457731ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
