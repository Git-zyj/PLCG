#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2555366447U;
unsigned long long int var_2 = 7328677819107046912ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)149;
unsigned char var_12 = (unsigned char)77;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)9929;
short var_17 = (short)-30223;
void init() {
}

void checksum() {
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
