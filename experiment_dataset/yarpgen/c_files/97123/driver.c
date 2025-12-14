#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25300;
int var_6 = 2085257276;
unsigned int var_7 = 755644934U;
short var_9 = (short)15487;
unsigned int var_13 = 3665077431U;
long long int var_16 = 2381985585099563066LL;
unsigned int var_17 = 3710963132U;
int zero = 0;
int var_18 = 619215654;
int var_19 = -480960304;
unsigned int var_20 = 1101184384U;
signed char var_21 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
