#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8956427335493338896LL;
unsigned short var_1 = (unsigned short)62528;
short var_2 = (short)24906;
unsigned int var_4 = 1141986956U;
unsigned short var_5 = (unsigned short)14111;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_7 = 8749133331287576619ULL;
signed char var_8 = (signed char)103;
int var_9 = 204981766;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 172590832U;
int zero = 0;
unsigned char var_12 = (unsigned char)169;
_Bool var_13 = (_Bool)1;
int var_14 = -60628716;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3517049232718570969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
