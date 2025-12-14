#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7652394385300369159ULL;
unsigned char var_6 = (unsigned char)4;
short var_10 = (short)-10474;
unsigned char var_15 = (unsigned char)251;
int zero = 0;
unsigned int var_17 = 1371954054U;
unsigned int var_18 = 3968962966U;
unsigned long long int var_19 = 15958497279395294002ULL;
unsigned short var_20 = (unsigned short)19381;
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
