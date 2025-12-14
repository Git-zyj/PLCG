#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11243597347318119477ULL;
int var_1 = 1027109565;
int var_5 = -2051232860;
signed char var_8 = (signed char)-121;
_Bool var_9 = (_Bool)1;
int var_10 = -144034145;
unsigned short var_13 = (unsigned short)53473;
int zero = 0;
unsigned char var_14 = (unsigned char)113;
unsigned int var_15 = 2634882494U;
unsigned char var_16 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
