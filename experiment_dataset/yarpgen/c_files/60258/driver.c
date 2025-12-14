#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8110894312803166465LL;
signed char var_6 = (signed char)6;
int zero = 0;
unsigned int var_10 = 925762744U;
unsigned char var_11 = (unsigned char)82;
long long int var_12 = 6050731394051491219LL;
unsigned int var_13 = 1969895320U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
