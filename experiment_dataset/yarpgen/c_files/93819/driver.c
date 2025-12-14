#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4485;
unsigned short var_10 = (unsigned short)17832;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 10799767250503863158ULL;
unsigned short var_17 = (unsigned short)37256;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
unsigned char var_20 = (unsigned char)34;
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
