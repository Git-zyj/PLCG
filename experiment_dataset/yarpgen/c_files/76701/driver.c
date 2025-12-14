#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
unsigned char var_7 = (unsigned char)149;
unsigned char var_10 = (unsigned char)28;
unsigned char var_11 = (unsigned char)180;
unsigned char var_14 = (unsigned char)212;
unsigned char var_17 = (unsigned char)22;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
unsigned char var_20 = (unsigned char)5;
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
