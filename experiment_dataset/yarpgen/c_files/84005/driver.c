#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49387;
unsigned int var_6 = 3652328996U;
unsigned short var_9 = (unsigned short)7513;
long long int var_11 = 5887942997921180630LL;
int zero = 0;
unsigned short var_16 = (unsigned short)38101;
long long int var_17 = -2289289883881782077LL;
void init() {
}

void checksum() {
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
