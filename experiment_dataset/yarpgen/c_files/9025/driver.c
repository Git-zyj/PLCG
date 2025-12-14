#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
_Bool var_4 = (_Bool)0;
unsigned char var_16 = (unsigned char)214;
unsigned long long int var_17 = 17488402998890171119ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 794497674365809135ULL;
unsigned short var_22 = (unsigned short)57577;
unsigned long long int var_23 = 7959210100006406569ULL;
unsigned char var_24 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
