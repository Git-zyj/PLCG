#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1594221705625900797ULL;
unsigned long long int var_1 = 13932666134223132216ULL;
unsigned char var_3 = (unsigned char)173;
unsigned long long int var_4 = 4357945955998423626ULL;
unsigned long long int var_7 = 5040177385181944501ULL;
unsigned long long int var_9 = 4567040692400233477ULL;
int zero = 0;
short var_10 = (short)5335;
long long int var_11 = -8800291461519839757LL;
short var_12 = (short)-15047;
unsigned long long int var_13 = 12248915259029383188ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
