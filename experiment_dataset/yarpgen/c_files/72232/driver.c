#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned short var_1 = (unsigned short)37680;
signed char var_2 = (signed char)-50;
unsigned short var_3 = (unsigned short)11593;
unsigned short var_6 = (unsigned short)343;
int zero = 0;
signed char var_13 = (signed char)122;
signed char var_14 = (signed char)-3;
signed char var_15 = (signed char)-70;
void init() {
}

void checksum() {
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
