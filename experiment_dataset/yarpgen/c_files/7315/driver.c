#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1904;
unsigned short var_1 = (unsigned short)43090;
unsigned char var_2 = (unsigned char)212;
unsigned char var_4 = (unsigned char)220;
int var_5 = -1833551295;
int var_8 = 2049633967;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)31241;
unsigned long long int var_11 = 15903077924755375358ULL;
int zero = 0;
signed char var_12 = (signed char)-45;
unsigned int var_13 = 27651790U;
int var_14 = -253643079;
int var_15 = 1214204099;
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
