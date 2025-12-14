#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7259532847792223866ULL;
unsigned short var_2 = (unsigned short)53701;
unsigned int var_6 = 2594300412U;
unsigned short var_9 = (unsigned short)21449;
unsigned long long int var_10 = 9918820978340873584ULL;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
int var_15 = 1385479184;
long long int var_16 = 8003966268874494152LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
