#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27223;
long long int var_3 = -4450628195286033238LL;
unsigned short var_4 = (unsigned short)25108;
unsigned int var_6 = 1206744633U;
short var_7 = (short)-32245;
unsigned int var_8 = 1013481773U;
unsigned short var_9 = (unsigned short)40453;
long long int var_10 = 7862179141885425061LL;
unsigned int var_11 = 407833882U;
short var_12 = (short)30935;
int zero = 0;
long long int var_13 = 3669290393967411072LL;
short var_14 = (short)-7033;
unsigned long long int var_15 = 11089707865035479295ULL;
long long int var_16 = 3072560707186457871LL;
unsigned short var_17 = (unsigned short)33289;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
