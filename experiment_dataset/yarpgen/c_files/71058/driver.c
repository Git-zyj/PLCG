#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4295547225136678482LL;
unsigned char var_3 = (unsigned char)191;
unsigned char var_5 = (unsigned char)63;
unsigned char var_9 = (unsigned char)168;
unsigned short var_15 = (unsigned short)4745;
int zero = 0;
short var_20 = (short)10154;
long long int var_21 = 5966188035989327420LL;
void init() {
}

void checksum() {
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
