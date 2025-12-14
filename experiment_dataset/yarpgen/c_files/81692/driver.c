#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned long long int var_3 = 2902982484860897800ULL;
unsigned char var_6 = (unsigned char)2;
signed char var_7 = (signed char)-15;
signed char var_12 = (signed char)124;
unsigned char var_16 = (unsigned char)1;
int zero = 0;
unsigned char var_18 = (unsigned char)138;
signed char var_19 = (signed char)12;
int var_20 = 1578009226;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
