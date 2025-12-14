#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34151;
unsigned int var_5 = 2573105261U;
int var_7 = 403200283;
int var_11 = 179914772;
unsigned char var_14 = (unsigned char)179;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
short var_21 = (short)16146;
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
