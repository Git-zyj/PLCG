#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17834;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 15688628467905946748ULL;
long long int var_4 = 6819546832709874217LL;
unsigned int var_5 = 3797921284U;
long long int var_8 = 218959742334084881LL;
unsigned char var_9 = (unsigned char)224;
signed char var_12 = (signed char)79;
int zero = 0;
unsigned int var_16 = 532147989U;
long long int var_17 = 2120955162781748577LL;
short var_18 = (short)-1735;
void init() {
}

void checksum() {
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
