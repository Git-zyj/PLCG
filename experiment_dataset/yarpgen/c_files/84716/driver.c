#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2145142331;
short var_3 = (short)5252;
int var_7 = -104102586;
unsigned char var_8 = (unsigned char)217;
int zero = 0;
unsigned char var_10 = (unsigned char)171;
short var_11 = (short)1178;
unsigned char var_12 = (unsigned char)133;
unsigned long long int var_13 = 5340826178998317865ULL;
int var_14 = 1272939222;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
