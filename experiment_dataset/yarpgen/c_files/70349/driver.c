#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 318562806;
unsigned char var_5 = (unsigned char)144;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
int var_12 = -1905131657;
unsigned char var_13 = (unsigned char)225;
int var_14 = 514527456;
void init() {
}

void checksum() {
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
