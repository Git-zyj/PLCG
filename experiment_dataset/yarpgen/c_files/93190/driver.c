#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 809763050;
unsigned long long int var_1 = 10462479425699588108ULL;
unsigned int var_2 = 1718500129U;
short var_3 = (short)-12674;
int var_10 = 1070991966;
unsigned long long int var_11 = 8154371743653230895ULL;
unsigned long long int var_13 = 8859063702897243237ULL;
unsigned short var_17 = (unsigned short)23559;
int zero = 0;
unsigned int var_18 = 790515903U;
unsigned short var_19 = (unsigned short)12856;
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
