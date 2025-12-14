#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3105199693U;
long long int var_4 = -3425901381231309606LL;
unsigned short var_9 = (unsigned short)59379;
unsigned int var_11 = 1401506880U;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-434;
unsigned int var_15 = 1583991732U;
unsigned long long int var_17 = 17676553304514631296ULL;
unsigned int var_18 = 2428297211U;
int zero = 0;
int var_19 = -813894493;
unsigned long long int var_20 = 9546774810099722974ULL;
int var_21 = 1727229127;
unsigned char var_22 = (unsigned char)233;
unsigned int var_23 = 1847147802U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
