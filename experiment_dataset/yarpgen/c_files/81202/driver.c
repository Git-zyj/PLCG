#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4110245789U;
long long int var_3 = -5934704379099729533LL;
int var_5 = 1640018880;
short var_11 = (short)17788;
short var_14 = (short)-24910;
int zero = 0;
short var_19 = (short)-27514;
unsigned short var_20 = (unsigned short)53905;
unsigned int var_21 = 540662760U;
void init() {
}

void checksum() {
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
