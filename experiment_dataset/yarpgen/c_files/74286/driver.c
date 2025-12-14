#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
signed char var_5 = (signed char)-46;
int var_6 = 1355592589;
int zero = 0;
long long int var_10 = -3330678992940497567LL;
unsigned int var_11 = 1437629045U;
long long int var_12 = -8554280474521841231LL;
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
