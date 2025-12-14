#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1002553329;
int var_1 = -1371518158;
signed char var_2 = (signed char)22;
unsigned long long int var_4 = 10013043851906989997ULL;
unsigned char var_5 = (unsigned char)173;
short var_6 = (short)-4761;
unsigned long long int var_8 = 10900835827219541137ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -4510653672090743149LL;
unsigned int var_11 = 219516544U;
short var_12 = (short)-11280;
_Bool var_13 = (_Bool)0;
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
