#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12049150565095254273ULL;
unsigned char var_3 = (unsigned char)160;
long long int var_4 = -1241528600265241219LL;
long long int var_5 = 4004397929358451497LL;
int var_7 = -1843496971;
unsigned long long int var_9 = 15962065627334885453ULL;
int zero = 0;
signed char var_11 = (signed char)-79;
long long int var_12 = -3172919535601253713LL;
short var_13 = (short)22093;
unsigned int var_14 = 609685902U;
short var_15 = (short)27188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
