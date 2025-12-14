#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned char var_2 = (unsigned char)186;
int var_3 = 736564185;
long long int var_7 = -6847930120927298333LL;
unsigned long long int var_9 = 7227325595176540978ULL;
int zero = 0;
signed char var_11 = (signed char)39;
unsigned int var_12 = 103045130U;
long long int var_13 = 3427759944832768553LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
