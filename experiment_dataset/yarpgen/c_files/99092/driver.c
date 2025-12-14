#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28865;
unsigned short var_6 = (unsigned short)8491;
signed char var_9 = (signed char)-67;
int zero = 0;
unsigned short var_15 = (unsigned short)58902;
signed char var_16 = (signed char)-3;
long long int var_17 = 7877923258470546994LL;
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
