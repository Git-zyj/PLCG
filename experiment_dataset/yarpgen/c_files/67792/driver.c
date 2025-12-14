#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -880051856;
signed char var_6 = (signed char)28;
unsigned int var_7 = 3705818112U;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
long long int var_11 = 6920020677430786851LL;
unsigned short var_12 = (unsigned short)37726;
unsigned char var_13 = (unsigned char)247;
void init() {
}

void checksum() {
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
