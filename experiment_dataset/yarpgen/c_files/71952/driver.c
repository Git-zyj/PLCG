#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned long long int var_5 = 9121194231883600902ULL;
signed char var_7 = (signed char)110;
unsigned char var_9 = (unsigned char)193;
unsigned short var_10 = (unsigned short)38753;
int zero = 0;
unsigned long long int var_11 = 667982189798097433ULL;
unsigned char var_12 = (unsigned char)248;
unsigned char var_13 = (unsigned char)252;
signed char var_14 = (signed char)72;
unsigned char var_15 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
