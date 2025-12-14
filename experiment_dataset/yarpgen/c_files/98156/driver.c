#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6038;
short var_3 = (short)23851;
int var_14 = -641499116;
unsigned char var_15 = (unsigned char)195;
unsigned char var_17 = (unsigned char)161;
int zero = 0;
short var_18 = (short)-3148;
int var_19 = 1857597971;
int var_20 = -707426350;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
