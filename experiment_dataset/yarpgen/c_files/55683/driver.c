#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17990;
signed char var_3 = (signed char)-111;
unsigned int var_5 = 3742749113U;
unsigned short var_6 = (unsigned short)60841;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)3175;
int zero = 0;
short var_10 = (short)9097;
long long int var_11 = 8747804804893789616LL;
unsigned int var_12 = 2263684857U;
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
