#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14903524541892691714ULL;
unsigned char var_10 = (unsigned char)8;
signed char var_16 = (signed char)-20;
int zero = 0;
long long int var_17 = -7941555140708042489LL;
signed char var_18 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
