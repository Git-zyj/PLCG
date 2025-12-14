#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)133;
unsigned char var_3 = (unsigned char)42;
short var_4 = (short)16174;
short var_5 = (short)-24578;
unsigned char var_6 = (unsigned char)213;
unsigned long long int var_7 = 13334872715797482421ULL;
unsigned char var_8 = (unsigned char)233;
signed char var_10 = (signed char)0;
int zero = 0;
signed char var_12 = (signed char)-8;
signed char var_13 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
