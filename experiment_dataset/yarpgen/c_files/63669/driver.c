#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -285081309;
unsigned int var_2 = 3218494066U;
int var_4 = 1635182112;
long long int var_5 = -8384788663967252178LL;
unsigned long long int var_9 = 11377693766967068781ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)87;
long long int var_18 = 4939667397654226577LL;
int zero = 0;
int var_19 = -587660503;
unsigned char var_20 = (unsigned char)115;
int var_21 = 1302577762;
void init() {
}

void checksum() {
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
