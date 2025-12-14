#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706070256U;
unsigned char var_1 = (unsigned char)182;
short var_3 = (short)-1853;
unsigned long long int var_4 = 12811147126407321690ULL;
unsigned char var_5 = (unsigned char)48;
signed char var_7 = (signed char)-91;
unsigned int var_9 = 3470286213U;
unsigned char var_10 = (unsigned char)81;
int zero = 0;
unsigned long long int var_11 = 18132100758175045121ULL;
unsigned long long int var_12 = 8302496831081716656ULL;
short var_13 = (short)29883;
short var_14 = (short)-27488;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
