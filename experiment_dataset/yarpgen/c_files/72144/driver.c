#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -922569148;
signed char var_2 = (signed char)75;
unsigned char var_6 = (unsigned char)11;
int var_7 = 209098341;
int var_9 = 1567609094;
int var_10 = 1483221661;
signed char var_12 = (signed char)-117;
int var_13 = 693840949;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
unsigned long long int var_15 = 18364572756229040075ULL;
unsigned long long int var_16 = 410126951930912915ULL;
int var_17 = 276552538;
unsigned long long int var_18 = 17227511146394374847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
