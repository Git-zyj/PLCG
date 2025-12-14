#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned char var_1 = (unsigned char)48;
unsigned char var_4 = (unsigned char)114;
unsigned char var_5 = (unsigned char)27;
unsigned char var_6 = (unsigned char)66;
unsigned char var_10 = (unsigned char)69;
unsigned char var_15 = (unsigned char)239;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
unsigned char var_19 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
