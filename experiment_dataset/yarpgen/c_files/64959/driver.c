#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
signed char var_2 = (signed char)-76;
short var_4 = (short)14877;
signed char var_7 = (signed char)27;
unsigned char var_8 = (unsigned char)218;
unsigned short var_9 = (unsigned short)16999;
int zero = 0;
int var_12 = 806098612;
unsigned long long int var_13 = 2033731046273973563ULL;
int var_14 = 993191275;
unsigned char var_15 = (unsigned char)113;
signed char var_16 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
