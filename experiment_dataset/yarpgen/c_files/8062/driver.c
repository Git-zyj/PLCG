#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
_Bool var_2 = (_Bool)0;
short var_3 = (short)2135;
int var_4 = 903225076;
short var_5 = (short)-4745;
short var_6 = (short)-6550;
unsigned long long int var_9 = 233797098699563944ULL;
unsigned long long int var_12 = 9270383188914029099ULL;
long long int var_13 = -6899743904579090722LL;
int zero = 0;
long long int var_14 = -4830863650453090604LL;
unsigned char var_15 = (unsigned char)41;
int var_16 = 299955377;
unsigned int var_17 = 578453765U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
