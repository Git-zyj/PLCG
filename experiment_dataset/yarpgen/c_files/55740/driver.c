#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1931477009U;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 2411942764U;
signed char var_9 = (signed char)-96;
unsigned long long int var_13 = 2086799111633930879ULL;
signed char var_17 = (signed char)-1;
unsigned char var_19 = (unsigned char)13;
int zero = 0;
unsigned char var_20 = (unsigned char)235;
unsigned char var_21 = (unsigned char)12;
short var_22 = (short)29336;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
