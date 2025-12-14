#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11621;
unsigned char var_4 = (unsigned char)26;
unsigned int var_8 = 1661863575U;
unsigned char var_12 = (unsigned char)240;
unsigned long long int var_13 = 15788222929102955312ULL;
int var_14 = 1403434000;
int zero = 0;
int var_15 = -972912593;
int var_16 = 872933041;
long long int var_17 = -3924009637983487484LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
