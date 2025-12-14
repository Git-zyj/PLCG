#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
signed char var_3 = (signed char)61;
unsigned char var_7 = (unsigned char)164;
int var_9 = -280597403;
signed char var_10 = (signed char)58;
unsigned short var_11 = (unsigned short)30651;
unsigned long long int var_12 = 6656344532030554601ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)59280;
unsigned long long int var_17 = 8765024949783744939ULL;
unsigned char var_18 = (unsigned char)66;
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
