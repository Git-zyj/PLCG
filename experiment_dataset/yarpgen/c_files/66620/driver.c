#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11955;
unsigned char var_3 = (unsigned char)133;
int var_4 = 1374589982;
signed char var_5 = (signed char)-78;
unsigned short var_6 = (unsigned short)59834;
unsigned short var_7 = (unsigned short)13194;
unsigned long long int var_8 = 6244211097557193688ULL;
short var_9 = (short)30088;
int zero = 0;
short var_10 = (short)13619;
unsigned long long int var_11 = 5443977310959671279ULL;
short var_12 = (short)16428;
unsigned short var_13 = (unsigned short)9025;
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
