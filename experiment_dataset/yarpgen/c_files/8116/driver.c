#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3060483721U;
unsigned char var_1 = (unsigned char)70;
unsigned int var_8 = 4081812110U;
unsigned long long int var_9 = 6163987075996343933ULL;
unsigned int var_11 = 2411689880U;
unsigned char var_12 = (unsigned char)129;
int zero = 0;
unsigned long long int var_19 = 6955393007479895150ULL;
unsigned char var_20 = (unsigned char)19;
unsigned long long int var_21 = 3614137085489241997ULL;
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
