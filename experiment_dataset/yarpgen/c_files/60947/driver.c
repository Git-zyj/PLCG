#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57009;
long long int var_3 = 8894253793260794414LL;
unsigned char var_5 = (unsigned char)90;
unsigned long long int var_9 = 12372489258967538316ULL;
unsigned short var_11 = (unsigned short)36081;
unsigned short var_14 = (unsigned short)41531;
int var_15 = -48082767;
int zero = 0;
unsigned long long int var_17 = 1936688765933695635ULL;
int var_18 = -804703811;
long long int var_19 = 2571174456892540846LL;
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
