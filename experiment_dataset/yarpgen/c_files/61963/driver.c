#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 518439661;
unsigned long long int var_7 = 2487733775545800772ULL;
unsigned char var_8 = (unsigned char)2;
int var_9 = -797988198;
unsigned char var_10 = (unsigned char)26;
long long int var_12 = 206310458982067786LL;
unsigned short var_18 = (unsigned short)27201;
unsigned short var_19 = (unsigned short)30412;
int zero = 0;
long long int var_20 = -8575421994723815861LL;
int var_21 = 703481870;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
