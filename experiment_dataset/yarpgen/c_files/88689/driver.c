#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1821147913U;
int var_8 = -143300628;
int var_11 = 1923750834;
unsigned int var_13 = 259249016U;
int zero = 0;
unsigned short var_15 = (unsigned short)37952;
int var_16 = 2099546428;
unsigned long long int var_17 = 11291219516812909913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
