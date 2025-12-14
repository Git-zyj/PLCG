#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
signed char var_2 = (signed char)50;
unsigned char var_3 = (unsigned char)95;
short var_4 = (short)14751;
unsigned char var_5 = (unsigned char)217;
short var_6 = (short)10219;
signed char var_8 = (signed char)36;
short var_9 = (short)-19507;
unsigned char var_10 = (unsigned char)72;
signed char var_11 = (signed char)-69;
short var_12 = (short)-20063;
int zero = 0;
short var_13 = (short)-25720;
short var_14 = (short)1378;
unsigned char var_15 = (unsigned char)35;
unsigned char var_16 = (unsigned char)157;
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
