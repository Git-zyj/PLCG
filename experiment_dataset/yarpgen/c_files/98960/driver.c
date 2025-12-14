#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -888620303;
unsigned char var_3 = (unsigned char)65;
int var_8 = 649429098;
int zero = 0;
int var_11 = 146057725;
unsigned long long int var_12 = 11290191968448383330ULL;
short var_13 = (short)30508;
unsigned char var_14 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
