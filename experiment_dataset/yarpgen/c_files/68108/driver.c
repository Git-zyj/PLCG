#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3437139934U;
unsigned char var_2 = (unsigned char)20;
unsigned char var_4 = (unsigned char)154;
long long int var_10 = 5911944500738703928LL;
int var_13 = -383792672;
unsigned char var_14 = (unsigned char)173;
unsigned int var_18 = 283247145U;
int zero = 0;
unsigned short var_19 = (unsigned short)41897;
unsigned short var_20 = (unsigned short)62042;
signed char var_21 = (signed char)108;
short var_22 = (short)13157;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
