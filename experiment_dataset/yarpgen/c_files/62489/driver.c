#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1133020576;
unsigned char var_4 = (unsigned char)29;
int var_6 = 723998071;
unsigned char var_8 = (unsigned char)137;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned long long int var_12 = 17170759119692376061ULL;
int var_13 = -441435866;
int var_14 = -1705504636;
signed char var_15 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
