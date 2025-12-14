#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
signed char var_8 = (signed char)37;
unsigned char var_9 = (unsigned char)105;
unsigned long long int var_10 = 1047246620617979262ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)3419;
unsigned long long int var_14 = 10393999429474704130ULL;
long long int var_15 = -713509678554151285LL;
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
