#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10555;
int var_4 = 1564419782;
long long int var_6 = 9146136234027566381LL;
long long int var_9 = 6480025830093533563LL;
unsigned long long int var_10 = 13921967764688693848ULL;
short var_11 = (short)-27191;
unsigned short var_14 = (unsigned short)19236;
int zero = 0;
unsigned short var_18 = (unsigned short)35255;
long long int var_19 = 3296112247609429919LL;
unsigned char var_20 = (unsigned char)135;
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
