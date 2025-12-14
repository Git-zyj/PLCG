#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13454;
unsigned long long int var_9 = 7730709264084784833ULL;
int var_10 = 28632333;
signed char var_11 = (signed char)79;
unsigned char var_12 = (unsigned char)6;
unsigned char var_14 = (unsigned char)163;
int zero = 0;
signed char var_16 = (signed char)-10;
unsigned long long int var_17 = 14003133350631698527ULL;
short var_18 = (short)12105;
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
