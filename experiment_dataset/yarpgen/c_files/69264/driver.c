#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1976179937;
unsigned short var_6 = (unsigned short)44946;
unsigned short var_8 = (unsigned short)2784;
long long int var_13 = 7326567506100732318LL;
unsigned long long int var_15 = 116210614155137819ULL;
int zero = 0;
unsigned long long int var_16 = 17368364003517198987ULL;
unsigned short var_17 = (unsigned short)45272;
unsigned int var_18 = 3260220953U;
unsigned long long int var_19 = 9798592811809448794ULL;
signed char var_20 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
