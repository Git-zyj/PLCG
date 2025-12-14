#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41610;
unsigned long long int var_4 = 12442506452881469959ULL;
short var_6 = (short)-17655;
unsigned short var_8 = (unsigned short)19346;
unsigned long long int var_10 = 655960252728487797ULL;
int zero = 0;
short var_11 = (short)-20771;
int var_12 = -1182802080;
long long int var_13 = -232065112389980415LL;
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
