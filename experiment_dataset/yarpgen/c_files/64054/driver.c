#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27469;
unsigned char var_6 = (unsigned char)93;
unsigned char var_7 = (unsigned char)116;
long long int var_10 = 5900922322525255021LL;
long long int var_12 = 3271731320694716833LL;
int zero = 0;
signed char var_13 = (signed char)6;
long long int var_14 = 5513407040211826372LL;
unsigned long long int var_15 = 15028397852946961609ULL;
int var_16 = -1805207985;
long long int var_17 = -4646857356066105471LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
