#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1989569529511770653ULL;
long long int var_7 = -378077125329937801LL;
unsigned long long int var_8 = 2796618693775358873ULL;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned long long int var_12 = 8566214217865581230ULL;
unsigned short var_13 = (unsigned short)57840;
void init() {
}

void checksum() {
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
