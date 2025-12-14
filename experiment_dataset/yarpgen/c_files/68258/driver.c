#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned char var_1 = (unsigned char)215;
unsigned char var_3 = (unsigned char)234;
unsigned char var_7 = (unsigned char)166;
int zero = 0;
unsigned long long int var_12 = 16118734440407818124ULL;
unsigned long long int var_13 = 7179143419863517548ULL;
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
