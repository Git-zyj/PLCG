#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19301;
signed char var_2 = (signed char)-23;
int var_3 = 573374353;
int zero = 0;
int var_12 = -816999909;
int var_13 = -251159587;
unsigned short var_14 = (unsigned short)22638;
int var_15 = -1275770032;
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
