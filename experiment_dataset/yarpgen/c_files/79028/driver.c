#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -480838893;
unsigned int var_5 = 3612826592U;
unsigned long long int var_8 = 9981992923042788109ULL;
unsigned int var_11 = 1158884221U;
unsigned short var_12 = (unsigned short)64685;
int zero = 0;
unsigned long long int var_13 = 7802059294773388974ULL;
long long int var_14 = 4217739541943901968LL;
unsigned long long int var_15 = 662731994483765030ULL;
unsigned long long int var_16 = 11838124613245817253ULL;
unsigned int var_17 = 4104756701U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
