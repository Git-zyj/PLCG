#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9701;
int var_2 = 1588264535;
int var_4 = -673176495;
unsigned short var_5 = (unsigned short)23057;
unsigned int var_6 = 1939628052U;
short var_8 = (short)18427;
short var_9 = (short)23010;
short var_10 = (short)11125;
short var_11 = (short)20942;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
unsigned long long int var_13 = 8374066528027634927ULL;
unsigned long long int var_14 = 17729660597851778995ULL;
unsigned int var_15 = 339438480U;
short var_16 = (short)-15091;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
