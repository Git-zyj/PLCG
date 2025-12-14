#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -552880690;
unsigned short var_9 = (unsigned short)52250;
int zero = 0;
unsigned char var_19 = (unsigned char)134;
unsigned char var_20 = (unsigned char)146;
unsigned long long int var_21 = 3067225171354726286ULL;
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
