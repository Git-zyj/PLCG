#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36619;
unsigned int var_3 = 2910053603U;
unsigned short var_4 = (unsigned short)50814;
unsigned long long int var_5 = 7932207533207528055ULL;
signed char var_6 = (signed char)-62;
signed char var_7 = (signed char)104;
int var_8 = -1493553065;
int zero = 0;
unsigned int var_10 = 291546235U;
unsigned int var_11 = 565424497U;
signed char var_12 = (signed char)121;
short var_13 = (short)27042;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
