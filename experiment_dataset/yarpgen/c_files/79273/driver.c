#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1347189660;
long long int var_3 = 970431944808682159LL;
signed char var_9 = (signed char)-20;
signed char var_12 = (signed char)-58;
unsigned char var_13 = (unsigned char)230;
int zero = 0;
unsigned int var_16 = 1081942401U;
int var_17 = 93961832;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
