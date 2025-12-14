#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7473096584069847166ULL;
unsigned int var_14 = 348555183U;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
unsigned int var_20 = 3553241451U;
unsigned char var_21 = (unsigned char)19;
int var_22 = 1338664161;
unsigned int var_23 = 1493560620U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
