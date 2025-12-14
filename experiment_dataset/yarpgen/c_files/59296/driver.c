#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7359558344743541184ULL;
short var_2 = (short)-28839;
unsigned char var_6 = (unsigned char)141;
short var_11 = (short)-6513;
int zero = 0;
unsigned short var_17 = (unsigned short)57947;
long long int var_18 = -2189917192806128275LL;
unsigned char var_19 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
