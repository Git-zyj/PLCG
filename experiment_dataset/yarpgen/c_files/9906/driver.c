#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2193548177953892581LL;
signed char var_3 = (signed char)22;
unsigned short var_10 = (unsigned short)34441;
signed char var_11 = (signed char)92;
int zero = 0;
signed char var_12 = (signed char)-124;
unsigned short var_13 = (unsigned short)4295;
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
