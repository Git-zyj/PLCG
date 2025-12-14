#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1946733656132741221LL;
long long int var_9 = 7790705993374996928LL;
unsigned char var_17 = (unsigned char)159;
int zero = 0;
signed char var_19 = (signed char)-63;
signed char var_20 = (signed char)122;
unsigned short var_21 = (unsigned short)34122;
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
