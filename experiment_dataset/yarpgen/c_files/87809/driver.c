#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18952;
unsigned char var_7 = (unsigned char)111;
signed char var_11 = (signed char)-100;
int var_12 = -1513877356;
unsigned char var_13 = (unsigned char)145;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned long long int var_19 = 17283269780061330358ULL;
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
