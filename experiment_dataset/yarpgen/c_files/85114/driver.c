#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3054837544656687854ULL;
int var_3 = -2129231991;
short var_4 = (short)-12633;
signed char var_6 = (signed char)84;
int var_8 = 1012620993;
signed char var_9 = (signed char)-82;
signed char var_10 = (signed char)-23;
int var_11 = 1287447309;
signed char var_12 = (signed char)-46;
unsigned long long int var_13 = 550661191953114069ULL;
unsigned long long int var_15 = 3496613341947519846ULL;
long long int var_17 = -8722766199380363857LL;
int zero = 0;
int var_18 = -1881071589;
signed char var_19 = (signed char)-2;
signed char var_20 = (signed char)98;
signed char var_21 = (signed char)64;
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
