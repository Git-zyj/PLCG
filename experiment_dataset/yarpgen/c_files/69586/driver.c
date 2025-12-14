#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
long long int var_4 = 1737427521610850186LL;
short var_5 = (short)15154;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2596047378114386595LL;
signed char var_8 = (signed char)63;
unsigned int var_10 = 649581457U;
signed char var_14 = (signed char)112;
int zero = 0;
signed char var_15 = (signed char)-108;
unsigned char var_16 = (unsigned char)149;
long long int var_17 = 1071495753066671559LL;
void init() {
}

void checksum() {
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
