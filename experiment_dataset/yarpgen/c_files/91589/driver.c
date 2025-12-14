#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
short var_1 = (short)17130;
unsigned char var_5 = (unsigned char)98;
unsigned int var_7 = 773020451U;
unsigned short var_10 = (unsigned short)55514;
unsigned char var_12 = (unsigned char)158;
short var_14 = (short)5522;
int zero = 0;
long long int var_15 = 1242804713446872625LL;
int var_16 = 1350705013;
unsigned int var_17 = 2977810317U;
unsigned long long int var_18 = 9866687513666182336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
