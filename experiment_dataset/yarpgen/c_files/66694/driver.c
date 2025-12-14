#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
short var_2 = (short)29186;
short var_3 = (short)-30342;
signed char var_5 = (signed char)85;
signed char var_9 = (signed char)-98;
signed char var_11 = (signed char)-91;
signed char var_15 = (signed char)-107;
int zero = 0;
unsigned long long int var_16 = 5172535625951528814ULL;
signed char var_17 = (signed char)0;
int var_18 = 908352987;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
