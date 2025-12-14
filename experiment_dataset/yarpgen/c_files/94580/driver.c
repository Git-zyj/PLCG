#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
signed char var_9 = (signed char)-90;
int var_13 = -215258303;
int var_14 = 452570470;
unsigned short var_15 = (unsigned short)40678;
int zero = 0;
signed char var_18 = (signed char)-75;
unsigned char var_19 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
