#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18586;
unsigned char var_1 = (unsigned char)33;
int var_2 = -441033376;
unsigned long long int var_4 = 2038615909280674364ULL;
int var_5 = -193443995;
unsigned char var_6 = (unsigned char)233;
long long int var_9 = -1453764673428484076LL;
int zero = 0;
unsigned short var_11 = (unsigned short)12213;
short var_12 = (short)25975;
short var_13 = (short)-3233;
unsigned short var_14 = (unsigned short)50598;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
