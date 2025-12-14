#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
unsigned int var_2 = 1900189259U;
short var_5 = (short)-7004;
short var_10 = (short)-15933;
signed char var_12 = (signed char)-55;
signed char var_14 = (signed char)-19;
short var_15 = (short)-10367;
int zero = 0;
unsigned char var_17 = (unsigned char)167;
unsigned char var_18 = (unsigned char)97;
short var_19 = (short)12829;
short var_20 = (short)-31372;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
