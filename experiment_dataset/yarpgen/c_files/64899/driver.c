#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14046;
signed char var_2 = (signed char)-73;
signed char var_4 = (signed char)2;
signed char var_5 = (signed char)84;
signed char var_8 = (signed char)-12;
unsigned short var_9 = (unsigned short)6332;
int zero = 0;
signed char var_10 = (signed char)58;
signed char var_11 = (signed char)67;
unsigned short var_12 = (unsigned short)4410;
unsigned short var_13 = (unsigned short)31944;
unsigned short var_14 = (unsigned short)63384;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
