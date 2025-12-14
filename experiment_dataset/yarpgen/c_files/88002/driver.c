#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11700710052088172440ULL;
unsigned char var_2 = (unsigned char)121;
int var_3 = -235714397;
unsigned short var_7 = (unsigned short)31067;
unsigned char var_9 = (unsigned char)34;
int var_10 = 1345404649;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)178;
int var_13 = 86955687;
unsigned short var_14 = (unsigned short)22973;
unsigned short var_15 = (unsigned short)50201;
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
