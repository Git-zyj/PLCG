#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11090410150643171113ULL;
short var_3 = (short)4225;
unsigned char var_5 = (unsigned char)205;
unsigned char var_7 = (unsigned char)79;
unsigned char var_8 = (unsigned char)193;
unsigned long long int var_10 = 4293035425032351048ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)245;
unsigned long long int var_15 = 18001157283830969016ULL;
void init() {
}

void checksum() {
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
