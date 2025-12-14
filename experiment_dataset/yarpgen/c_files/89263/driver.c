#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-4908;
unsigned char var_10 = (unsigned char)122;
signed char var_11 = (signed char)-111;
int zero = 0;
long long int var_20 = -4118791149758830736LL;
unsigned short var_21 = (unsigned short)45102;
int var_22 = -1702538836;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
