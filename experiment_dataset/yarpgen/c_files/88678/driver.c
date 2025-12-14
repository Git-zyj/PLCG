#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned char var_2 = (unsigned char)64;
unsigned short var_4 = (unsigned short)48617;
unsigned char var_10 = (unsigned char)150;
int var_13 = 1906761971;
int zero = 0;
unsigned char var_16 = (unsigned char)57;
signed char var_17 = (signed char)68;
unsigned long long int var_18 = 16965335375032309642ULL;
int var_19 = 576347852;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
