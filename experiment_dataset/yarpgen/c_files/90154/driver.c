#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 938079926U;
signed char var_1 = (signed char)-80;
unsigned long long int var_2 = 8296620543739328540ULL;
short var_3 = (short)12903;
int var_4 = -2089080382;
signed char var_5 = (signed char)39;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 14253149503385961576ULL;
unsigned long long int var_10 = 14473486437255541659ULL;
short var_11 = (short)12215;
unsigned short var_12 = (unsigned short)60737;
short var_14 = (short)2290;
signed char var_15 = (signed char)21;
unsigned long long int var_16 = 7160772476119954162ULL;
int zero = 0;
int var_17 = -1844105475;
unsigned short var_18 = (unsigned short)63481;
signed char var_19 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
