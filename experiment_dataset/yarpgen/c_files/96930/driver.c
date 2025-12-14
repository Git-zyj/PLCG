#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 489370446;
unsigned int var_2 = 1542829720U;
unsigned char var_11 = (unsigned char)11;
unsigned int var_13 = 342410446U;
unsigned int var_14 = 4194453132U;
int zero = 0;
int var_18 = 1484802091;
int var_19 = -820875133;
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
