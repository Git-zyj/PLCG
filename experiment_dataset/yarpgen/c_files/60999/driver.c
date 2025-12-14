#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -647649017;
long long int var_2 = 5905734736920404735LL;
long long int var_4 = 4629760725247049703LL;
signed char var_5 = (signed char)-117;
int var_6 = 77756775;
unsigned long long int var_10 = 1561838733038898751ULL;
signed char var_13 = (signed char)-109;
int zero = 0;
unsigned int var_14 = 66487352U;
short var_15 = (short)-12579;
unsigned long long int var_16 = 4163941064235406623ULL;
unsigned short var_17 = (unsigned short)52091;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
