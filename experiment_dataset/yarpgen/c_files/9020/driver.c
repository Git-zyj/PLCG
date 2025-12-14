#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1150406464670500345LL;
unsigned int var_4 = 1593934921U;
signed char var_6 = (signed char)-91;
unsigned short var_7 = (unsigned short)7934;
unsigned short var_8 = (unsigned short)26792;
int var_9 = 883974936;
unsigned long long int var_10 = 15600900175768377047ULL;
unsigned int var_11 = 3027037844U;
unsigned short var_15 = (unsigned short)43040;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)214;
int zero = 0;
unsigned long long int var_18 = 2977114049205219754ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-3047;
void init() {
}

void checksum() {
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
