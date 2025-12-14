#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4279226640202510307LL;
long long int var_2 = 5544891943135566109LL;
unsigned short var_3 = (unsigned short)10668;
unsigned int var_5 = 1419519621U;
unsigned int var_9 = 1120386283U;
int var_10 = -1371509072;
unsigned char var_11 = (unsigned char)196;
int zero = 0;
unsigned short var_14 = (unsigned short)48651;
unsigned char var_15 = (unsigned char)237;
int var_16 = 1289729615;
long long int var_17 = -878255884686706691LL;
unsigned int var_18 = 143118127U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
