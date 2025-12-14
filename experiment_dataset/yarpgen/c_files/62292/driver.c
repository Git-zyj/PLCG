#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19104;
unsigned char var_3 = (unsigned char)100;
long long int var_5 = 991058837358868121LL;
long long int var_6 = 4656919915027554051LL;
int var_9 = -1730614685;
unsigned short var_10 = (unsigned short)4694;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
long long int var_13 = 6423007188858214789LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
