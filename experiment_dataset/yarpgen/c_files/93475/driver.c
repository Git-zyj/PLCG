#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2301453619U;
signed char var_2 = (signed char)28;
int var_3 = 278149968;
signed char var_7 = (signed char)107;
unsigned int var_10 = 1968054306U;
int var_17 = 476694295;
unsigned int var_18 = 1075429175U;
int zero = 0;
int var_19 = 879635583;
short var_20 = (short)2238;
unsigned long long int var_21 = 14884765764408318689ULL;
void init() {
}

void checksum() {
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
