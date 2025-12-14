#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 340395744U;
int var_5 = 1667948905;
long long int var_6 = 8237421108285232423LL;
unsigned char var_8 = (unsigned char)229;
unsigned int var_11 = 2791943896U;
int zero = 0;
unsigned int var_12 = 87591057U;
unsigned char var_13 = (unsigned char)125;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6768762896040502837ULL;
void init() {
}

void checksum() {
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
