#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14021;
signed char var_1 = (signed char)-67;
signed char var_2 = (signed char)-124;
long long int var_4 = -309063759591917138LL;
long long int var_6 = -5513826649975075317LL;
signed char var_10 = (signed char)-64;
short var_12 = (short)2579;
int zero = 0;
unsigned char var_13 = (unsigned char)251;
unsigned long long int var_14 = 1260757142898666924ULL;
long long int var_15 = -7841627803290249482LL;
signed char var_16 = (signed char)12;
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
