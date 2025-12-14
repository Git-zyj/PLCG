#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6225981472111749454ULL;
unsigned int var_4 = 429706888U;
int var_11 = -1132484268;
unsigned int var_13 = 1196181098U;
int var_15 = -127528408;
int zero = 0;
int var_18 = -1447385038;
unsigned short var_19 = (unsigned short)37350;
unsigned char var_20 = (unsigned char)218;
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
