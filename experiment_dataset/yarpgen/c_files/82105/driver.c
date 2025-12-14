#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29039;
long long int var_2 = 7156059976204207313LL;
long long int var_5 = -2592457028936194276LL;
unsigned char var_7 = (unsigned char)184;
unsigned char var_9 = (unsigned char)133;
unsigned char var_18 = (unsigned char)63;
int zero = 0;
int var_20 = 2146888281;
signed char var_21 = (signed char)-39;
unsigned char var_22 = (unsigned char)53;
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
