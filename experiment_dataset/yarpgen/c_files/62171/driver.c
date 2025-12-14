#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4191734334003882132LL;
signed char var_3 = (signed char)-28;
unsigned char var_10 = (unsigned char)80;
int zero = 0;
signed char var_11 = (signed char)-12;
unsigned short var_12 = (unsigned short)23761;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
