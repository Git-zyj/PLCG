#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19466;
unsigned short var_2 = (unsigned short)52538;
int var_3 = -286556891;
short var_4 = (short)-27808;
int var_5 = -191584257;
unsigned char var_6 = (unsigned char)35;
short var_7 = (short)-2956;
signed char var_8 = (signed char)77;
unsigned long long int var_9 = 17932435109490077205ULL;
signed char var_10 = (signed char)95;
unsigned int var_11 = 834734536U;
unsigned short var_12 = (unsigned short)50495;
short var_13 = (short)-23803;
unsigned int var_14 = 3986503138U;
unsigned int var_15 = 4157302685U;
short var_16 = (short)-839;
int zero = 0;
unsigned long long int var_18 = 8299067059637745794ULL;
unsigned short var_19 = (unsigned short)35761;
int var_20 = 1644161;
unsigned int var_21 = 3954061410U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
