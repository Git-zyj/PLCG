#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
signed char var_3 = (signed char)-98;
unsigned short var_5 = (unsigned short)38397;
int zero = 0;
unsigned int var_12 = 1040399877U;
unsigned int var_13 = 3571203523U;
int var_14 = -1827373508;
void init() {
}

void checksum() {
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
