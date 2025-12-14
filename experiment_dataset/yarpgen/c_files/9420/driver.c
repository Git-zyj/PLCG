#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22301;
int var_7 = 287411587;
unsigned short var_9 = (unsigned short)36205;
unsigned char var_11 = (unsigned char)34;
int zero = 0;
unsigned char var_14 = (unsigned char)68;
signed char var_15 = (signed char)-92;
void init() {
}

void checksum() {
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
