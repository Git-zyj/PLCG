#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19768;
int var_7 = 311801812;
unsigned long long int var_8 = 8839392395537530974ULL;
unsigned int var_17 = 3057677654U;
int zero = 0;
unsigned int var_19 = 2003023074U;
unsigned char var_20 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
