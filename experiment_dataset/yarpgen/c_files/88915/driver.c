#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1049656495;
unsigned short var_3 = (unsigned short)19567;
signed char var_6 = (signed char)23;
int zero = 0;
unsigned char var_10 = (unsigned char)172;
short var_11 = (short)30827;
unsigned long long int var_12 = 530325953014469523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
