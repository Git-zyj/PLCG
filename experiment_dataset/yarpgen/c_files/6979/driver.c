#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15444505777610314105ULL;
signed char var_1 = (signed char)-12;
int var_2 = 2587597;
long long int var_4 = -7715453947061816107LL;
signed char var_5 = (signed char)-15;
signed char var_6 = (signed char)61;
short var_7 = (short)-17635;
signed char var_8 = (signed char)-54;
int zero = 0;
short var_12 = (short)25215;
short var_13 = (short)-26362;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
