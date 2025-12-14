#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
unsigned char var_2 = (unsigned char)192;
unsigned char var_3 = (unsigned char)167;
unsigned char var_4 = (unsigned char)222;
int var_5 = -1385869215;
unsigned int var_8 = 1066108910U;
unsigned char var_9 = (unsigned char)109;
unsigned char var_11 = (unsigned char)63;
long long int var_12 = -3847435941364585933LL;
int zero = 0;
short var_13 = (short)1165;
unsigned char var_14 = (unsigned char)210;
unsigned short var_15 = (unsigned short)7335;
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
