#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -307344365;
unsigned char var_2 = (unsigned char)68;
short var_6 = (short)22077;
unsigned long long int var_9 = 13605257333488887030ULL;
int var_10 = 629087666;
unsigned int var_18 = 3572196112U;
unsigned short var_19 = (unsigned short)4342;
int zero = 0;
unsigned short var_20 = (unsigned short)60094;
unsigned int var_21 = 2093764895U;
unsigned short var_22 = (unsigned short)12;
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
