#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -80084233;
unsigned long long int var_1 = 2172838336337270904ULL;
int var_2 = -133949809;
unsigned int var_3 = 2427320536U;
unsigned short var_5 = (unsigned short)45704;
signed char var_6 = (signed char)-95;
short var_7 = (short)2813;
unsigned int var_9 = 841592195U;
int zero = 0;
unsigned short var_10 = (unsigned short)62470;
short var_11 = (short)2442;
long long int var_12 = 4579126792676245347LL;
unsigned long long int var_13 = 11986250638002039627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
