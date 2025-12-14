#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -434068368;
unsigned char var_2 = (unsigned char)249;
signed char var_3 = (signed char)2;
unsigned short var_9 = (unsigned short)34608;
signed char var_11 = (signed char)-31;
int zero = 0;
unsigned char var_12 = (unsigned char)244;
unsigned char var_13 = (unsigned char)64;
unsigned short var_14 = (unsigned short)16668;
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
