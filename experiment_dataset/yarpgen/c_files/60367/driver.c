#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25304;
int var_1 = -568217376;
unsigned short var_2 = (unsigned short)5034;
unsigned long long int var_4 = 8716400484928445961ULL;
int var_5 = -18203811;
unsigned long long int var_6 = 4345566457160865179ULL;
int var_12 = -384674814;
int zero = 0;
short var_15 = (short)11433;
unsigned long long int var_16 = 10654888602736479384ULL;
unsigned int var_17 = 3292692746U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
