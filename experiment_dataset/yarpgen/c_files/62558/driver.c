#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -810754347;
long long int var_1 = 6482727410986898472LL;
short var_2 = (short)18435;
short var_3 = (short)-4477;
unsigned int var_6 = 3590249362U;
unsigned char var_8 = (unsigned char)65;
long long int var_9 = 4656004249123585516LL;
signed char var_10 = (signed char)-8;
unsigned int var_11 = 3478035656U;
unsigned long long int var_12 = 552694746489097997ULL;
int zero = 0;
short var_13 = (short)-4096;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5956980581552096031LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
