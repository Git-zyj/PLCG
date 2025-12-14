#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
int var_1 = 797508795;
long long int var_2 = 2771783276576100150LL;
unsigned char var_3 = (unsigned char)100;
long long int var_4 = -4882079821342892287LL;
int var_5 = -1260373768;
long long int var_8 = -8646507043920380016LL;
long long int var_9 = 280727821261729127LL;
int zero = 0;
unsigned char var_10 = (unsigned char)35;
unsigned char var_11 = (unsigned char)76;
int var_12 = -1885927130;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
