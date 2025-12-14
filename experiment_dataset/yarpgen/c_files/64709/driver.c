#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1551081427;
unsigned short var_5 = (unsigned short)42267;
long long int var_7 = -8313024459947743479LL;
short var_8 = (short)7028;
long long int var_12 = -7416810869286339024LL;
int zero = 0;
signed char var_17 = (signed char)-104;
short var_18 = (short)-24207;
short var_19 = (short)-7288;
signed char var_20 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
