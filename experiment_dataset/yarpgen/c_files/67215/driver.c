#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3318280090150057317LL;
int var_2 = -1336616255;
signed char var_3 = (signed char)111;
unsigned char var_4 = (unsigned char)245;
unsigned short var_6 = (unsigned short)45121;
short var_7 = (short)5781;
unsigned short var_10 = (unsigned short)17962;
int var_11 = 830198;
int var_12 = -1076261073;
int zero = 0;
unsigned long long int var_13 = 4400358867728001426ULL;
signed char var_14 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
