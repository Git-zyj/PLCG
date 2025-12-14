#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3302069007619514598LL;
unsigned short var_8 = (unsigned short)35634;
unsigned long long int var_9 = 1111179457736362030ULL;
unsigned short var_10 = (unsigned short)21433;
unsigned long long int var_12 = 4122096935942417200ULL;
int zero = 0;
unsigned int var_19 = 2355660426U;
short var_20 = (short)-27471;
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
