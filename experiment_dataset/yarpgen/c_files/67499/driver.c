#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1228180361425850623LL;
unsigned long long int var_1 = 7096560457921824558ULL;
int var_2 = -446986437;
short var_6 = (short)-20983;
int var_9 = 1397226993;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
unsigned long long int var_12 = 7671141532189519719ULL;
long long int var_13 = 5294756529444649832LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
