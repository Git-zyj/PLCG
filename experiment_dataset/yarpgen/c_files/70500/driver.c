#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
short var_7 = (short)30413;
long long int var_11 = 6413078297179070503LL;
int zero = 0;
int var_13 = -1169041438;
unsigned short var_14 = (unsigned short)42113;
long long int var_15 = 6078125363928879742LL;
long long int var_16 = -1441250757818942816LL;
void init() {
}

void checksum() {
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
