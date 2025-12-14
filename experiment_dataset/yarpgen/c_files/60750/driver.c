#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58682;
unsigned long long int var_7 = 5033240953812600801ULL;
unsigned long long int var_8 = 8764555676949846965ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)175;
unsigned long long int var_13 = 3595812811251759495ULL;
unsigned long long int var_14 = 4987818926905900213ULL;
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
