#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17714062637810404070ULL;
int var_3 = 265180425;
short var_6 = (short)-22853;
short var_10 = (short)24980;
unsigned short var_14 = (unsigned short)50181;
int zero = 0;
int var_17 = -590487931;
short var_18 = (short)4125;
void init() {
}

void checksum() {
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
