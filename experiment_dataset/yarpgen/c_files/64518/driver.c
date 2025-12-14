#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4759968443515171428LL;
signed char var_3 = (signed char)51;
unsigned short var_4 = (unsigned short)37450;
unsigned short var_8 = (unsigned short)44072;
unsigned int var_9 = 1084343672U;
unsigned short var_10 = (unsigned short)742;
signed char var_11 = (signed char)94;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)34957;
short var_17 = (short)-4656;
int zero = 0;
short var_19 = (short)15322;
short var_20 = (short)-24523;
short var_21 = (short)-32177;
unsigned short var_22 = (unsigned short)36129;
unsigned int var_23 = 1731499309U;
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
