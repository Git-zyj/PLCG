#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2125323392578180063ULL;
unsigned int var_2 = 267072595U;
short var_5 = (short)19733;
unsigned char var_6 = (unsigned char)248;
short var_7 = (short)-30698;
unsigned int var_9 = 2352196714U;
int zero = 0;
signed char var_10 = (signed char)-63;
int var_11 = -1242654108;
short var_12 = (short)31204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
