#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)217;
short var_9 = (short)-27574;
unsigned char var_12 = (unsigned char)168;
unsigned long long int var_14 = 4843920517618580899ULL;
unsigned long long int var_17 = 1704478627316993874ULL;
unsigned short var_18 = (unsigned short)28318;
int zero = 0;
short var_19 = (short)-4521;
unsigned short var_20 = (unsigned short)15178;
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
