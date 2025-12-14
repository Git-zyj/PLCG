#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)10;
long long int var_7 = -4697020353928820412LL;
unsigned long long int var_13 = 16697988885819754769ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)53626;
int var_18 = -90086254;
unsigned short var_19 = (unsigned short)8269;
short var_20 = (short)-9243;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
