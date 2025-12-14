#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19755;
unsigned long long int var_8 = 5180620610748619840ULL;
unsigned char var_9 = (unsigned char)50;
int var_10 = -1172809960;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
unsigned long long int var_13 = 7552159283218476334ULL;
unsigned long long int var_14 = 9394659587748856647ULL;
int var_15 = 1347104818;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
