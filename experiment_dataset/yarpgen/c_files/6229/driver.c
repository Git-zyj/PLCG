#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned short var_1 = (unsigned short)36588;
unsigned int var_3 = 4214675436U;
unsigned long long int var_4 = 17887136708034111346ULL;
unsigned char var_5 = (unsigned char)132;
signed char var_7 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_12 = 1610361570U;
unsigned char var_13 = (unsigned char)19;
unsigned long long int var_14 = 18113856890525812291ULL;
unsigned long long int var_15 = 11552954989160148633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
