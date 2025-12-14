#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3140887711U;
unsigned long long int var_8 = 15264846044846338588ULL;
unsigned long long int var_12 = 3946962113688008700ULL;
short var_14 = (short)-9778;
unsigned short var_15 = (unsigned short)34579;
int zero = 0;
long long int var_16 = -6574741267370624327LL;
unsigned char var_17 = (unsigned char)143;
short var_18 = (short)31182;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
