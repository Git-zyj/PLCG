#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2270089697U;
short var_2 = (short)9782;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)229;
unsigned int var_9 = 2359455327U;
unsigned int var_11 = 1007022517U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3667446948U;
unsigned long long int var_14 = 7063367390220142788ULL;
unsigned char var_16 = (unsigned char)35;
int zero = 0;
short var_17 = (short)17065;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4432783669238190283LL;
unsigned int var_20 = 349272745U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
