#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43952;
unsigned int var_2 = 2522527139U;
signed char var_4 = (signed char)127;
unsigned long long int var_5 = 18402528761125083921ULL;
unsigned char var_6 = (unsigned char)55;
unsigned char var_9 = (unsigned char)34;
int zero = 0;
int var_12 = 449985074;
short var_13 = (short)-30049;
unsigned long long int var_14 = 9220759218586440264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
