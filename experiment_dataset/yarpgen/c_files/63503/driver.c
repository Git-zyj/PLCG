#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned short var_2 = (unsigned short)5502;
unsigned int var_3 = 283412001U;
unsigned long long int var_5 = 15810434039859602181ULL;
unsigned int var_8 = 3663050899U;
int zero = 0;
short var_11 = (short)7675;
signed char var_12 = (signed char)-107;
int var_13 = 213009264;
void init() {
}

void checksum() {
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
