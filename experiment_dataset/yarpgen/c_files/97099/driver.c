#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16056311619450717375ULL;
unsigned long long int var_1 = 2839540995868108292ULL;
int var_2 = 2086490571;
unsigned int var_9 = 3064648161U;
short var_10 = (short)-14130;
signed char var_11 = (signed char)-97;
short var_15 = (short)32179;
int zero = 0;
unsigned long long int var_16 = 17787150811270600924ULL;
unsigned short var_17 = (unsigned short)19307;
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
