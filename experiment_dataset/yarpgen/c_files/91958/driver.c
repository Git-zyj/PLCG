#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29026;
signed char var_4 = (signed char)84;
signed char var_6 = (signed char)45;
signed char var_7 = (signed char)-34;
unsigned long long int var_8 = 15768621911757434201ULL;
signed char var_9 = (signed char)23;
signed char var_10 = (signed char)29;
int zero = 0;
unsigned short var_12 = (unsigned short)55337;
unsigned long long int var_13 = 16964488757541579935ULL;
int var_14 = 1023555688;
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
