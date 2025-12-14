#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)14;
int var_6 = 1599307123;
short var_8 = (short)32446;
short var_11 = (short)5857;
int var_14 = -1380081180;
int zero = 0;
unsigned char var_18 = (unsigned char)178;
unsigned char var_19 = (unsigned char)228;
unsigned char var_20 = (unsigned char)94;
short var_21 = (short)19837;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
