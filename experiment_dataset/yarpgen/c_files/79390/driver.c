#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
long long int var_8 = 7738034036449044085LL;
int var_14 = -1742450468;
unsigned char var_15 = (unsigned char)75;
int var_16 = -636772781;
unsigned char var_17 = (unsigned char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
long long int var_20 = 767455343138529024LL;
unsigned char var_21 = (unsigned char)35;
int var_22 = 1635363174;
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
