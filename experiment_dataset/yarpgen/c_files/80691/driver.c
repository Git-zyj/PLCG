#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)91;
signed char var_4 = (signed char)-96;
unsigned char var_9 = (unsigned char)174;
unsigned char var_13 = (unsigned char)247;
unsigned int var_14 = 2410690691U;
int zero = 0;
unsigned char var_15 = (unsigned char)129;
unsigned long long int var_16 = 12239236021041652836ULL;
signed char var_17 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
