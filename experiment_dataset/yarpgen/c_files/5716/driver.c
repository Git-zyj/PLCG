#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7688;
unsigned long long int var_7 = 1283113568902924286ULL;
unsigned long long int var_15 = 17370833824922864885ULL;
unsigned long long int var_16 = 3522507990330534357ULL;
int var_18 = -222674411;
int var_19 = -346153945;
int zero = 0;
unsigned int var_20 = 2406607033U;
unsigned long long int var_21 = 7881017887813117674ULL;
unsigned short var_22 = (unsigned short)1441;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
