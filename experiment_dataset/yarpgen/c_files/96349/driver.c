#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)181;
unsigned char var_13 = (unsigned char)64;
unsigned char var_15 = (unsigned char)133;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned long long int var_20 = 4888015287834710690ULL;
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
