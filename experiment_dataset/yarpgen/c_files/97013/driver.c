#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4171183U;
long long int var_1 = -1877801055301844538LL;
unsigned int var_2 = 435085691U;
short var_3 = (short)10466;
unsigned short var_8 = (unsigned short)46773;
short var_10 = (short)-9404;
int zero = 0;
int var_14 = -1146628127;
unsigned short var_15 = (unsigned short)50503;
unsigned short var_16 = (unsigned short)64627;
short var_17 = (short)-14759;
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
