#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2841950061U;
long long int var_6 = 7534055687827552599LL;
unsigned char var_8 = (unsigned char)252;
int var_10 = 1290548265;
int zero = 0;
unsigned int var_11 = 749943637U;
signed char var_12 = (signed char)-54;
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
