#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -319678321;
int var_1 = 1358642495;
unsigned int var_2 = 129046365U;
int var_4 = 944477955;
int var_6 = 1803956204;
long long int var_7 = -3923651231837162785LL;
int var_10 = -1942941596;
int zero = 0;
int var_11 = 367898960;
int var_12 = -633980130;
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
