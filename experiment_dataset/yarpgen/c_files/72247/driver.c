#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3230;
unsigned int var_2 = 1955484352U;
int var_3 = 1337766111;
unsigned long long int var_4 = 4684274768207713544ULL;
unsigned char var_5 = (unsigned char)223;
unsigned char var_6 = (unsigned char)159;
short var_7 = (short)-9227;
unsigned char var_8 = (unsigned char)219;
short var_9 = (short)18266;
short var_10 = (short)-23233;
unsigned char var_13 = (unsigned char)143;
unsigned char var_14 = (unsigned char)233;
unsigned int var_15 = 222848536U;
int var_16 = -1707904682;
short var_17 = (short)-29454;
int zero = 0;
unsigned long long int var_18 = 2643729847979905365ULL;
unsigned long long int var_19 = 6741706323455868854ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
