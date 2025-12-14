#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -733862816;
int var_4 = 1204778564;
unsigned int var_6 = 1612356294U;
unsigned char var_7 = (unsigned char)61;
int var_8 = -278435599;
signed char var_9 = (signed char)-13;
int var_10 = 353549975;
signed char var_11 = (signed char)-20;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
unsigned int var_13 = 2244681541U;
void init() {
}

void checksum() {
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
