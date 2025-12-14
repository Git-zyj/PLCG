#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 784692209U;
unsigned short var_4 = (unsigned short)30526;
unsigned short var_7 = (unsigned short)21780;
signed char var_9 = (signed char)82;
signed char var_11 = (signed char)119;
int zero = 0;
signed char var_12 = (signed char)-6;
unsigned char var_13 = (unsigned char)170;
unsigned long long int var_14 = 9229682685244492777ULL;
unsigned char var_15 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
