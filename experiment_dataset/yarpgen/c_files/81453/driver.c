#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32648;
int var_2 = -1420750445;
unsigned long long int var_4 = 6902500878093416668ULL;
short var_6 = (short)-14210;
unsigned short var_7 = (unsigned short)27563;
short var_9 = (short)-24988;
unsigned short var_10 = (unsigned short)35720;
unsigned char var_11 = (unsigned char)152;
unsigned long long int var_12 = 7031191084847950274ULL;
unsigned char var_13 = (unsigned char)108;
int zero = 0;
signed char var_14 = (signed char)-121;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)247;
void init() {
}

void checksum() {
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
