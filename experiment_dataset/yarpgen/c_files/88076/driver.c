#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3022948893U;
unsigned short var_6 = (unsigned short)2849;
unsigned short var_9 = (unsigned short)50831;
unsigned short var_14 = (unsigned short)30735;
int zero = 0;
unsigned short var_19 = (unsigned short)58829;
signed char var_20 = (signed char)-93;
unsigned long long int var_21 = 13739977060830295332ULL;
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
