#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3157417651089869491ULL;
unsigned long long int var_3 = 17896750509885613300ULL;
unsigned short var_4 = (unsigned short)15788;
int var_5 = 1255309252;
short var_6 = (short)-20347;
unsigned long long int var_8 = 4598666901133712676ULL;
int zero = 0;
unsigned long long int var_10 = 3454578141667493805ULL;
signed char var_11 = (signed char)-37;
signed char var_12 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
