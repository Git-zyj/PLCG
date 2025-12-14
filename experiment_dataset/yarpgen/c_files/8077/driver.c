#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
unsigned int var_4 = 3865751373U;
unsigned char var_9 = (unsigned char)161;
unsigned char var_12 = (unsigned char)216;
unsigned char var_13 = (unsigned char)5;
int var_16 = -1816846755;
int zero = 0;
unsigned char var_19 = (unsigned char)33;
int var_20 = 957660547;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
