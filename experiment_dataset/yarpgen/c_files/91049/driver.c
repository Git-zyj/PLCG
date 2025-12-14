#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)60;
unsigned char var_12 = (unsigned char)85;
signed char var_13 = (signed char)30;
unsigned char var_17 = (unsigned char)230;
int zero = 0;
signed char var_20 = (signed char)-76;
unsigned char var_21 = (unsigned char)255;
unsigned char var_22 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
