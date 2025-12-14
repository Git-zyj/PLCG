#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4481193689099891967LL;
unsigned short var_4 = (unsigned short)53866;
unsigned long long int var_7 = 7490027646215414296ULL;
signed char var_8 = (signed char)-127;
unsigned int var_9 = 884800854U;
int zero = 0;
signed char var_13 = (signed char)100;
signed char var_14 = (signed char)64;
unsigned short var_15 = (unsigned short)38565;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
