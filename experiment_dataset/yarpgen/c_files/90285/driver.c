#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned char var_2 = (unsigned char)59;
unsigned char var_3 = (unsigned char)214;
unsigned char var_5 = (unsigned char)61;
unsigned int var_6 = 1070212768U;
unsigned char var_8 = (unsigned char)159;
int zero = 0;
unsigned char var_10 = (unsigned char)62;
unsigned char var_11 = (unsigned char)78;
unsigned char var_12 = (unsigned char)142;
unsigned char var_13 = (unsigned char)62;
unsigned int var_14 = 2238341772U;
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
