#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60144;
int var_1 = -1668164143;
unsigned int var_3 = 3736898535U;
unsigned char var_5 = (unsigned char)95;
unsigned int var_8 = 2170299768U;
int zero = 0;
unsigned short var_10 = (unsigned short)18880;
signed char var_11 = (signed char)81;
int var_12 = 131320499;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
