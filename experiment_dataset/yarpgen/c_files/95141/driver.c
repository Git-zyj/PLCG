#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 389278900;
unsigned long long int var_5 = 17709050002955648569ULL;
short var_9 = (short)-19917;
int var_11 = 1454580231;
int zero = 0;
unsigned char var_20 = (unsigned char)6;
signed char var_21 = (signed char)-95;
void init() {
}

void checksum() {
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
