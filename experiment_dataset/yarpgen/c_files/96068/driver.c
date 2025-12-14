#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)175;
unsigned int var_7 = 4073814155U;
int var_14 = 724499167;
int var_16 = -153179257;
unsigned short var_18 = (unsigned short)16830;
int zero = 0;
unsigned int var_19 = 221450806U;
unsigned char var_20 = (unsigned char)189;
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
