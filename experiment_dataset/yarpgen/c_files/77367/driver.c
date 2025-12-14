#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)232;
unsigned short var_5 = (unsigned short)55787;
unsigned char var_6 = (unsigned char)46;
unsigned char var_7 = (unsigned char)174;
unsigned short var_9 = (unsigned short)48061;
long long int var_12 = 403682229600847193LL;
unsigned long long int var_13 = 5610994158767559891ULL;
int zero = 0;
signed char var_14 = (signed char)12;
unsigned long long int var_15 = 9282372191080212409ULL;
unsigned char var_16 = (unsigned char)23;
_Bool var_17 = (_Bool)1;
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
