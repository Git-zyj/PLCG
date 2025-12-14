#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-86;
long long int var_4 = -5398817203939326553LL;
int var_7 = 1126950242;
unsigned char var_11 = (unsigned char)36;
unsigned short var_12 = (unsigned short)61085;
unsigned short var_14 = (unsigned short)49091;
int zero = 0;
long long int var_15 = 5972249554124142927LL;
int var_16 = 600415127;
unsigned short var_17 = (unsigned short)12077;
void init() {
}

void checksum() {
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
