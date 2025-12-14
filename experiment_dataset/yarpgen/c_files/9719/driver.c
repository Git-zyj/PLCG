#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10639515844317267386ULL;
unsigned int var_7 = 3660602499U;
int var_8 = 1577788706;
int zero = 0;
unsigned long long int var_19 = 3924438132102542576ULL;
unsigned char var_20 = (unsigned char)227;
unsigned short var_21 = (unsigned short)3176;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
