#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 767183372U;
unsigned int var_2 = 3212814204U;
unsigned char var_7 = (unsigned char)225;
long long int var_9 = -5864449269966939358LL;
int zero = 0;
unsigned short var_10 = (unsigned short)29781;
unsigned long long int var_11 = 1062119447708008990ULL;
long long int var_12 = 9032297100131176800LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
