#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_4 = (signed char)-64;
unsigned char var_6 = (unsigned char)79;
int var_7 = -143126578;
unsigned int var_9 = 3977629559U;
unsigned short var_11 = (unsigned short)42929;
unsigned char var_12 = (unsigned char)235;
signed char var_14 = (signed char)-19;
unsigned char var_16 = (unsigned char)101;
unsigned long long int var_17 = 3948234331111157511ULL;
int zero = 0;
unsigned int var_18 = 3049885671U;
unsigned long long int var_19 = 2399054802336308295ULL;
short var_20 = (short)19603;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
