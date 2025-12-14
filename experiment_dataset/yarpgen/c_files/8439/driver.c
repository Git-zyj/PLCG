#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32048;
int var_2 = 541376246;
signed char var_4 = (signed char)-73;
signed char var_5 = (signed char)-109;
signed char var_6 = (signed char)-28;
signed char var_7 = (signed char)-71;
int var_9 = 205437501;
unsigned char var_10 = (unsigned char)232;
unsigned short var_12 = (unsigned short)53165;
int zero = 0;
int var_13 = 1882681078;
unsigned long long int var_14 = 5183739841518288686ULL;
int var_15 = 108124085;
short var_16 = (short)26866;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
