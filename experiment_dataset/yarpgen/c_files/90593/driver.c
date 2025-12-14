#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3323116165U;
unsigned char var_2 = (unsigned char)14;
unsigned char var_4 = (unsigned char)12;
long long int var_7 = -8502947389931208880LL;
unsigned char var_9 = (unsigned char)6;
unsigned long long int var_14 = 7402861874292897514ULL;
long long int var_16 = 248430810780183005LL;
int zero = 0;
unsigned short var_18 = (unsigned short)43205;
unsigned long long int var_19 = 2481377592588281981ULL;
short var_20 = (short)-381;
unsigned char var_21 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
