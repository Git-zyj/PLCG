#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1329262874;
long long int var_5 = -8298816726765601613LL;
unsigned short var_8 = (unsigned short)12131;
unsigned int var_9 = 717408702U;
int zero = 0;
unsigned short var_16 = (unsigned short)16116;
unsigned short var_17 = (unsigned short)60319;
short var_18 = (short)-30416;
void init() {
}

void checksum() {
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
