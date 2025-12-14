#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6317542985656930439LL;
unsigned int var_2 = 1058479492U;
unsigned short var_3 = (unsigned short)5912;
unsigned short var_6 = (unsigned short)1268;
short var_7 = (short)-8309;
short var_8 = (short)-19903;
unsigned int var_9 = 3499655864U;
unsigned char var_10 = (unsigned char)175;
unsigned short var_12 = (unsigned short)11949;
int zero = 0;
unsigned int var_14 = 207620184U;
long long int var_15 = 931723807567999923LL;
unsigned int var_16 = 1713004736U;
signed char var_17 = (signed char)-56;
void init() {
}

void checksum() {
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
