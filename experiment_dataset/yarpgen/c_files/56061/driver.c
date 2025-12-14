#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29453;
signed char var_3 = (signed char)100;
int var_6 = 145258012;
int var_9 = 113975968;
int zero = 0;
unsigned short var_10 = (unsigned short)51737;
unsigned short var_11 = (unsigned short)38807;
unsigned short var_12 = (unsigned short)21916;
int var_13 = 1967950031;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
