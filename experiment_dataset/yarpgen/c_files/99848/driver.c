#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16110419699359921636ULL;
short var_4 = (short)-1697;
signed char var_5 = (signed char)49;
short var_10 = (short)-25074;
unsigned char var_12 = (unsigned char)1;
int zero = 0;
unsigned char var_18 = (unsigned char)98;
int var_19 = 1929971071;
unsigned int var_20 = 1261418333U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
