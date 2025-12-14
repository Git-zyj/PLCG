#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15379617457968802274ULL;
short var_7 = (short)2990;
unsigned short var_9 = (unsigned short)38310;
long long int var_15 = -3695326695522980875LL;
unsigned char var_18 = (unsigned char)38;
int zero = 0;
unsigned long long int var_19 = 17307550794828449893ULL;
unsigned int var_20 = 378640163U;
short var_21 = (short)17316;
void init() {
}

void checksum() {
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
