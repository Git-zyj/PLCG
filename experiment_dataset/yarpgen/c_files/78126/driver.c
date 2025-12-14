#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9119556065446577886LL;
unsigned char var_3 = (unsigned char)64;
unsigned char var_7 = (unsigned char)228;
signed char var_9 = (signed char)-81;
int zero = 0;
unsigned char var_11 = (unsigned char)88;
unsigned short var_12 = (unsigned short)24617;
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
