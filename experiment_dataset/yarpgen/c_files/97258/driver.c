#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 82507435;
int var_2 = -1088168772;
unsigned long long int var_8 = 17530502475295440691ULL;
int var_13 = 1025612718;
long long int var_14 = -269301645612240446LL;
short var_15 = (short)-18998;
signed char var_18 = (signed char)86;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
int var_20 = 1261123956;
unsigned char var_21 = (unsigned char)171;
void init() {
}

void checksum() {
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
