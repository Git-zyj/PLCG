#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3001120841U;
int var_1 = -221233018;
short var_2 = (short)-4283;
unsigned char var_6 = (unsigned char)66;
unsigned long long int var_10 = 10385172484154055841ULL;
unsigned long long int var_13 = 15109022767495965621ULL;
int zero = 0;
unsigned int var_15 = 4254098333U;
unsigned char var_16 = (unsigned char)73;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)24;
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
