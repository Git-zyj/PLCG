#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
int var_1 = 1462008101;
int var_2 = 405880851;
int var_3 = 1433502647;
unsigned char var_5 = (unsigned char)115;
int zero = 0;
unsigned char var_11 = (unsigned char)70;
unsigned char var_12 = (unsigned char)31;
signed char var_13 = (signed char)70;
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
