#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)50;
unsigned char var_14 = (unsigned char)84;
short var_15 = (short)18201;
int zero = 0;
short var_18 = (short)19480;
int var_19 = 1808471662;
short var_20 = (short)14876;
unsigned long long int var_21 = 17507353417911592140ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
