#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2011006220;
unsigned long long int var_3 = 9631555278094190842ULL;
unsigned long long int var_4 = 14237421241887409457ULL;
unsigned short var_5 = (unsigned short)11456;
signed char var_6 = (signed char)84;
long long int var_9 = -3475718122846833936LL;
unsigned int var_12 = 3623782611U;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
signed char var_15 = (signed char)-95;
unsigned char var_16 = (unsigned char)168;
unsigned long long int var_17 = 5812410972091687524ULL;
unsigned long long int var_18 = 2878243098236625464ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
