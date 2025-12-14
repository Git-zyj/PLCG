#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
unsigned char var_4 = (unsigned char)87;
unsigned char var_5 = (unsigned char)162;
unsigned char var_8 = (unsigned char)186;
unsigned char var_9 = (unsigned char)23;
unsigned char var_10 = (unsigned char)195;
unsigned char var_11 = (unsigned char)188;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned char var_13 = (unsigned char)155;
unsigned char var_14 = (unsigned char)251;
unsigned char var_15 = (unsigned char)224;
void init() {
}

void checksum() {
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
