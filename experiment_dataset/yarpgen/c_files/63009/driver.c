#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -392909127;
unsigned int var_2 = 2954135119U;
unsigned int var_3 = 325821462U;
long long int var_5 = -7367641024252723110LL;
long long int var_7 = 6934568344523266758LL;
short var_8 = (short)-5380;
unsigned char var_9 = (unsigned char)140;
signed char var_10 = (signed char)13;
int zero = 0;
unsigned int var_11 = 3004750875U;
long long int var_12 = -2387755543958577103LL;
signed char var_13 = (signed char)95;
short var_14 = (short)-5924;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
