#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
short var_2 = (short)-6555;
unsigned short var_4 = (unsigned short)57071;
short var_8 = (short)23922;
long long int var_9 = -8170767050414295266LL;
long long int var_11 = -4854692971280830637LL;
signed char var_12 = (signed char)-87;
unsigned char var_13 = (unsigned char)204;
unsigned int var_14 = 589976646U;
int var_16 = -744669190;
signed char var_18 = (signed char)109;
unsigned int var_19 = 1578693950U;
int zero = 0;
unsigned long long int var_20 = 2085055672945633882ULL;
int var_21 = -433018133;
int var_22 = 285520173;
void init() {
}

void checksum() {
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
