#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15025528472539510883ULL;
unsigned char var_6 = (unsigned char)137;
unsigned char var_7 = (unsigned char)151;
unsigned int var_15 = 643526213U;
unsigned int var_16 = 2226767147U;
signed char var_18 = (signed char)62;
int zero = 0;
unsigned long long int var_20 = 16019232911874625674ULL;
unsigned short var_21 = (unsigned short)2486;
unsigned char var_22 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
