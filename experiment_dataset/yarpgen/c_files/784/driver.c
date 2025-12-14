#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6107;
signed char var_1 = (signed char)-127;
unsigned short var_2 = (unsigned short)38425;
int var_4 = -1892324986;
signed char var_8 = (signed char)-48;
int var_9 = -2028387902;
unsigned long long int var_11 = 2516964786074249773ULL;
unsigned long long int var_13 = 8792208554910419627ULL;
int var_14 = -175553032;
int zero = 0;
int var_15 = 1583780514;
unsigned long long int var_16 = 11683418470097298145ULL;
void init() {
}

void checksum() {
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
