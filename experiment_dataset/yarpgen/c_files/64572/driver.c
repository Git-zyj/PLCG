#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1702161971;
long long int var_3 = -559633411999265338LL;
int var_6 = 654119573;
short var_11 = (short)-31723;
int zero = 0;
int var_12 = 31409355;
unsigned char var_13 = (unsigned char)194;
void init() {
}

void checksum() {
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
